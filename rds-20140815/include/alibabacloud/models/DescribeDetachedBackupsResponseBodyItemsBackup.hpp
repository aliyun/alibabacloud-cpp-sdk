// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDetachedBackupsResponseBodyItemsBackup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDetachedBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceComment, DBInstanceComment_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HostInstanceID, hostInstanceID_);
      DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
      DARABONBA_PTR_TO_JSON(MetaStatus, metaStatus_);
      DARABONBA_PTR_TO_JSON(StoreStatus, storeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDetachedBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceComment, DBInstanceComment_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HostInstanceID, hostInstanceID_);
      DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
      DARABONBA_PTR_FROM_JSON(MetaStatus, metaStatus_);
      DARABONBA_PTR_FROM_JSON(StoreStatus, storeStatus_);
    };
    DescribeDetachedBackupsResponseBodyItemsBackup() = default ;
    DescribeDetachedBackupsResponseBodyItemsBackup(const DescribeDetachedBackupsResponseBodyItemsBackup &) = default ;
    DescribeDetachedBackupsResponseBodyItemsBackup(DescribeDetachedBackupsResponseBodyItemsBackup &&) = default ;
    DescribeDetachedBackupsResponseBodyItemsBackup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDetachedBackupsResponseBodyItemsBackup() = default ;
    DescribeDetachedBackupsResponseBodyItemsBackup& operator=(const DescribeDetachedBackupsResponseBodyItemsBackup &) = default ;
    DescribeDetachedBackupsResponseBodyItemsBackup& operator=(DescribeDetachedBackupsResponseBodyItemsBackup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupDownloadURL_ == nullptr
        && return this->backupEndTime_ == nullptr && return this->backupId_ == nullptr && return this->backupIntranetDownloadURL_ == nullptr && return this->backupMethod_ == nullptr && return this->backupMode_ == nullptr
        && return this->backupSize_ == nullptr && return this->backupStartTime_ == nullptr && return this->backupStatus_ == nullptr && return this->backupType_ == nullptr && return this->consistentTime_ == nullptr
        && return this->DBInstanceComment_ == nullptr && return this->DBInstanceId_ == nullptr && return this->hostInstanceID_ == nullptr && return this->isAvail_ == nullptr && return this->metaStatus_ == nullptr
        && return this->storeStatus_ == nullptr; };
    // backupDownloadURL Field Functions 
    bool hasBackupDownloadURL() const { return this->backupDownloadURL_ != nullptr;};
    void deleteBackupDownloadURL() { this->backupDownloadURL_ = nullptr;};
    inline string backupDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupDownloadURL_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupDownloadURL(string backupDownloadURL) { DARABONBA_PTR_SET_VALUE(backupDownloadURL_, backupDownloadURL) };


    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline string backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupIntranetDownloadURL Field Functions 
    bool hasBackupIntranetDownloadURL() const { return this->backupIntranetDownloadURL_ != nullptr;};
    void deleteBackupIntranetDownloadURL() { this->backupIntranetDownloadURL_ = nullptr;};
    inline string backupIntranetDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupIntranetDownloadURL_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupIntranetDownloadURL(string backupIntranetDownloadURL) { DARABONBA_PTR_SET_VALUE(backupIntranetDownloadURL_, backupIntranetDownloadURL) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // consistentTime Field Functions 
    bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
    void deleteConsistentTime() { this->consistentTime_ = nullptr;};
    inline int64_t consistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, 0L) };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setConsistentTime(int64_t consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


    // DBInstanceComment Field Functions 
    bool hasDBInstanceComment() const { return this->DBInstanceComment_ != nullptr;};
    void deleteDBInstanceComment() { this->DBInstanceComment_ = nullptr;};
    inline string DBInstanceComment() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceComment_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setDBInstanceComment(string DBInstanceComment) { DARABONBA_PTR_SET_VALUE(DBInstanceComment_, DBInstanceComment) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // hostInstanceID Field Functions 
    bool hasHostInstanceID() const { return this->hostInstanceID_ != nullptr;};
    void deleteHostInstanceID() { this->hostInstanceID_ = nullptr;};
    inline string hostInstanceID() const { DARABONBA_PTR_GET_DEFAULT(hostInstanceID_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setHostInstanceID(string hostInstanceID) { DARABONBA_PTR_SET_VALUE(hostInstanceID_, hostInstanceID) };


    // isAvail Field Functions 
    bool hasIsAvail() const { return this->isAvail_ != nullptr;};
    void deleteIsAvail() { this->isAvail_ = nullptr;};
    inline int32_t isAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, 0) };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setIsAvail(int32_t isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


    // metaStatus Field Functions 
    bool hasMetaStatus() const { return this->metaStatus_ != nullptr;};
    void deleteMetaStatus() { this->metaStatus_ = nullptr;};
    inline string metaStatus() const { DARABONBA_PTR_GET_DEFAULT(metaStatus_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setMetaStatus(string metaStatus) { DARABONBA_PTR_SET_VALUE(metaStatus_, metaStatus) };


    // storeStatus Field Functions 
    bool hasStoreStatus() const { return this->storeStatus_ != nullptr;};
    void deleteStoreStatus() { this->storeStatus_ = nullptr;};
    inline string storeStatus() const { DARABONBA_PTR_GET_DEFAULT(storeStatus_, "") };
    inline DescribeDetachedBackupsResponseBodyItemsBackup& setStoreStatus(string storeStatus) { DARABONBA_PTR_SET_VALUE(storeStatus_, storeStatus) };


  protected:
    // The URL that is used to download the diagnostic report over the Internet. If the diagnostic report cannot be downloaded, an empty string is returned.
    std::shared_ptr<string> backupDownloadURL_ = nullptr;
    // The end time of the backup task.
    // 
    // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> backupEndTime_ = nullptr;
    // The ID of the backup set.
    std::shared_ptr<string> backupId_ = nullptr;
    // The URL that is used to download the log file over an internal network. If the log file cannot be downloaded, an empty string is returned.
    std::shared_ptr<string> backupIntranetDownloadURL_ = nullptr;
    // The method that is used to generate the data backup file. Valid values:
    // 
    // *   **Logical**: logical backup
    // *   **Physical**: physical backup
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The backup method. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    std::shared_ptr<string> backupMode_ = nullptr;
    // The backup size. Unit: bytes.
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    // The start time of the backup task.
    // 
    // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The status of the backup set. Valid values:
    // 
    // *   **Success**
    // *   **Failed**
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The backup type of the backup file. Valid values:
    // 
    // *   **FullBackup**
    // *   **IncrementalBackup**
    std::shared_ptr<string> backupType_ = nullptr;
    // The point in time at which the data in the backup set is consistent. The return value of this parameter is a timestamp.
    // 
    // >  If the instance runs MySQL 5.6, a timestamp is returned. Otherwise, the value 0 is returned.
    std::shared_ptr<int64_t> consistentTime_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> DBInstanceComment_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The ID of the instance that generates the backup set. This parameter is used to indicate whether the instance that generates the backup set is a primary instance or a secondary instance.
    std::shared_ptr<string> hostInstanceID_ = nullptr;
    // Indicates whether the backup set is available. Valid values:
    // 
    // *   **0**: The backup set is unavailable.
    // *   **1**: The backup set is available.
    std::shared_ptr<int32_t> isAvail_ = nullptr;
    // The status of the backup set that is used to restore individual databases or tables. Valid values:
    // 
    // *   **OK**: The backup set is normal.
    // *   **LARGE**: The backup set contains an abnormally large number of tables. It cannot be used to restore individual databases or tables.
    // *   **EMPTY**: The backup set is generated from a failed backup task.
    std::shared_ptr<string> metaStatus_ = nullptr;
    // Indicates whether the data backup file can be deleted. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> storeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
