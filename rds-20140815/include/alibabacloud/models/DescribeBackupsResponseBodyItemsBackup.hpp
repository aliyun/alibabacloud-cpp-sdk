// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBackupsResponseBodyItemsBackup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
      DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupInitiator, backupInitiator_);
      DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(Checksum, checksum_);
      DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_TO_JSON(CopyOnlyBackup, copyOnlyBackup_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
      DARABONBA_PTR_TO_JSON(HostInstanceID, hostInstanceID_);
      DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
      DARABONBA_PTR_TO_JSON(MetaStatus, metaStatus_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(StoreStatus, storeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
      DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupInitiator, backupInitiator_);
      DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_FROM_JSON(CopyOnlyBackup, copyOnlyBackup_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
      DARABONBA_PTR_FROM_JSON(HostInstanceID, hostInstanceID_);
      DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
      DARABONBA_PTR_FROM_JSON(MetaStatus, metaStatus_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(StoreStatus, storeStatus_);
    };
    DescribeBackupsResponseBodyItemsBackup() = default ;
    DescribeBackupsResponseBodyItemsBackup(const DescribeBackupsResponseBodyItemsBackup &) = default ;
    DescribeBackupsResponseBodyItemsBackup(DescribeBackupsResponseBodyItemsBackup &&) = default ;
    DescribeBackupsResponseBodyItemsBackup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBodyItemsBackup() = default ;
    DescribeBackupsResponseBodyItemsBackup& operator=(const DescribeBackupsResponseBodyItemsBackup &) = default ;
    DescribeBackupsResponseBodyItemsBackup& operator=(DescribeBackupsResponseBodyItemsBackup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupDownloadLinkByDB_ == nullptr
        && return this->backupDownloadURL_ == nullptr && return this->backupEndTime_ == nullptr && return this->backupId_ == nullptr && return this->backupInitiator_ == nullptr && return this->backupIntranetDownloadURL_ == nullptr
        && return this->backupMethod_ == nullptr && return this->backupMode_ == nullptr && return this->backupSize_ == nullptr && return this->backupStartTime_ == nullptr && return this->backupStatus_ == nullptr
        && return this->backupType_ == nullptr && return this->checksum_ == nullptr && return this->consistentTime_ == nullptr && return this->copyOnlyBackup_ == nullptr && return this->DBInstanceId_ == nullptr
        && return this->encryption_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->expectExpireTime_ == nullptr && return this->hostInstanceID_ == nullptr
        && return this->isAvail_ == nullptr && return this->metaStatus_ == nullptr && return this->storageClass_ == nullptr && return this->storeStatus_ == nullptr; };
    // backupDownloadLinkByDB Field Functions 
    bool hasBackupDownloadLinkByDB() const { return this->backupDownloadLinkByDB_ != nullptr;};
    void deleteBackupDownloadLinkByDB() { this->backupDownloadLinkByDB_ = nullptr;};
    inline const Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB & backupDownloadLinkByDB() const { DARABONBA_PTR_GET_CONST(backupDownloadLinkByDB_, Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB) };
    inline Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB backupDownloadLinkByDB() { DARABONBA_PTR_GET(backupDownloadLinkByDB_, Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB) };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupDownloadLinkByDB(const Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB & backupDownloadLinkByDB) { DARABONBA_PTR_SET_VALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupDownloadLinkByDB(Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB && backupDownloadLinkByDB) { DARABONBA_PTR_SET_RVALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };


    // backupDownloadURL Field Functions 
    bool hasBackupDownloadURL() const { return this->backupDownloadURL_ != nullptr;};
    void deleteBackupDownloadURL() { this->backupDownloadURL_ = nullptr;};
    inline string backupDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupDownloadURL_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupDownloadURL(string backupDownloadURL) { DARABONBA_PTR_SET_VALUE(backupDownloadURL_, backupDownloadURL) };


    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline string backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupInitiator Field Functions 
    bool hasBackupInitiator() const { return this->backupInitiator_ != nullptr;};
    void deleteBackupInitiator() { this->backupInitiator_ = nullptr;};
    inline string backupInitiator() const { DARABONBA_PTR_GET_DEFAULT(backupInitiator_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupInitiator(string backupInitiator) { DARABONBA_PTR_SET_VALUE(backupInitiator_, backupInitiator) };


    // backupIntranetDownloadURL Field Functions 
    bool hasBackupIntranetDownloadURL() const { return this->backupIntranetDownloadURL_ != nullptr;};
    void deleteBackupIntranetDownloadURL() { this->backupIntranetDownloadURL_ = nullptr;};
    inline string backupIntranetDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupIntranetDownloadURL_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupIntranetDownloadURL(string backupIntranetDownloadURL) { DARABONBA_PTR_SET_VALUE(backupIntranetDownloadURL_, backupIntranetDownloadURL) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string checksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // consistentTime Field Functions 
    bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
    void deleteConsistentTime() { this->consistentTime_ = nullptr;};
    inline int64_t consistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, 0L) };
    inline DescribeBackupsResponseBodyItemsBackup& setConsistentTime(int64_t consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


    // copyOnlyBackup Field Functions 
    bool hasCopyOnlyBackup() const { return this->copyOnlyBackup_ != nullptr;};
    void deleteCopyOnlyBackup() { this->copyOnlyBackup_ = nullptr;};
    inline string copyOnlyBackup() const { DARABONBA_PTR_GET_DEFAULT(copyOnlyBackup_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setCopyOnlyBackup(string copyOnlyBackup) { DARABONBA_PTR_SET_VALUE(copyOnlyBackup_, copyOnlyBackup) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline string encryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expectExpireTime Field Functions 
    bool hasExpectExpireTime() const { return this->expectExpireTime_ != nullptr;};
    void deleteExpectExpireTime() { this->expectExpireTime_ = nullptr;};
    inline string expectExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expectExpireTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setExpectExpireTime(string expectExpireTime) { DARABONBA_PTR_SET_VALUE(expectExpireTime_, expectExpireTime) };


    // hostInstanceID Field Functions 
    bool hasHostInstanceID() const { return this->hostInstanceID_ != nullptr;};
    void deleteHostInstanceID() { this->hostInstanceID_ = nullptr;};
    inline string hostInstanceID() const { DARABONBA_PTR_GET_DEFAULT(hostInstanceID_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setHostInstanceID(string hostInstanceID) { DARABONBA_PTR_SET_VALUE(hostInstanceID_, hostInstanceID) };


    // isAvail Field Functions 
    bool hasIsAvail() const { return this->isAvail_ != nullptr;};
    void deleteIsAvail() { this->isAvail_ = nullptr;};
    inline int32_t isAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, 0) };
    inline DescribeBackupsResponseBodyItemsBackup& setIsAvail(int32_t isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


    // metaStatus Field Functions 
    bool hasMetaStatus() const { return this->metaStatus_ != nullptr;};
    void deleteMetaStatus() { this->metaStatus_ = nullptr;};
    inline string metaStatus() const { DARABONBA_PTR_GET_DEFAULT(metaStatus_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setMetaStatus(string metaStatus) { DARABONBA_PTR_SET_VALUE(metaStatus_, metaStatus) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // storeStatus Field Functions 
    bool hasStoreStatus() const { return this->storeStatus_ != nullptr;};
    void deleteStoreStatus() { this->storeStatus_ = nullptr;};
    inline string storeStatus() const { DARABONBA_PTR_GET_DEFAULT(storeStatus_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setStoreStatus(string storeStatus) { DARABONBA_PTR_SET_VALUE(storeStatus_, storeStatus) };


  protected:
    // An array consisting of URLs from which you can download backup sets of individual databases.
    std::shared_ptr<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB> backupDownloadLinkByDB_ = nullptr;
    // The URL that is used to download the backup set over the Internet. If the backup set cannot be downloaded, null is returned.
    // 
    // >  For example, if BackupMethod of an ApsaraDB RDS for SQL Server instance is set to **Snapshot**, a null string is returned.
    std::shared_ptr<string> backupDownloadURL_ = nullptr;
    // The end time of the backup task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> backupEndTime_ = nullptr;
    // The ID of the backup set.
    std::shared_ptr<string> backupId_ = nullptr;
    // The initiator of the backup task. Valid values:
    // 
    // *   **System**
    // *   **User**
    std::shared_ptr<string> backupInitiator_ = nullptr;
    // The URL that is used to download the backup set over an internal network. If the backup set cannot be downloaded, null is returned.
    // 
    // >  For example, if BackupMethod of an ApsaraDB RDS for SQL Server instance is set to **Snapshot**, a null string is returned.
    std::shared_ptr<string> backupIntranetDownloadURL_ = nullptr;
    // The method that is used to generate the backup set. Valid values:
    // 
    // *   **Logical**: logical backup
    // *   **Physical**: physical backup
    // *   **Snapshot**: snapshot backup
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The backup mode of the backup set. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    std::shared_ptr<string> backupMode_ = nullptr;
    // The size of the data backup file. Unit: bytes.
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    // The start time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The state of the backup set.
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The backup type of the backup set. Valid values:
    // 
    // *   **FullBackup**
    // *   **IncrementalBackup**
    std::shared_ptr<string> backupType_ = nullptr;
    // The checksum. The value of this parameter is calculated by using the CRC64 algorithm.
    std::shared_ptr<string> checksum_ = nullptr;
    // The point in time at which the data in the backup set is consistent. The return value of this parameter is a timestamp.
    // 
    // >  If the instance runs MySQL 5.6, a timestamp is returned. Otherwise, the value 0 is returned.
    std::shared_ptr<int64_t> consistentTime_ = nullptr;
    // The backup mode of the backup set. Valid values:
    // 
    // *   0: the standard mode. This mode supports full backups and incremental backups.
    // *   1: the copy-only mode. This mode supports only full backups.
    // 
    // >  This parameter is returned only when the instance runs SQL Server.
    std::shared_ptr<string> copyOnlyBackup_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The encryption information about the backup set.
    std::shared_ptr<string> encryption_ = nullptr;
    // The type of the database engine. Valid values:
    // 
    // *   MySQL
    // *   SQLServer
    // *   PostgreSQL
    // *   MariaDB
    std::shared_ptr<string> engine_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> expectExpireTime_ = nullptr;
    // The ID of the instance that generates the backup set. This parameter is used to indicate whether the instance that generates the backup set is a primary instance or a secondary instance.
    std::shared_ptr<string> hostInstanceID_ = nullptr;
    // Indicates whether the backup set is available. Valid values:
    // 
    // *   **0**: The backup set is unavailable.
    // *   **1**: The backup set is available.
    std::shared_ptr<int32_t> isAvail_ = nullptr;
    // The status of the backup set that is used to restore individual databases or tables. Valid values:
    // 
    // *   **OK**: The data backup file is normal.
    // *   **LARGE**: The data backup file contains an abnormally large number of tables. It cannot be used to restore individual databases or tables.
    // *   **EMPTY**: The data backup file is generated from a failed backup task.
    // 
    // >  If an empty string is returned, the data backup file cannot be used to restore individual databases or tables.
    std::shared_ptr<string> metaStatus_ = nullptr;
    // The storage class of the backup set. Valid values:
    // 
    // *   **0**: regular storage
    // *   **1**: archive storage
    std::shared_ptr<string> storageClass_ = nullptr;
    // Indicates whether the backup set can be deleted. Valid values:
    // 
    // *   **Enabled**: The backup set can be deleted.
    // *   **Disabled**: The backup set cannot be deleted.
    std::shared_ptr<string> storeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
