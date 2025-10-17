// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupsResponseBodyItemsBackup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupSetSize, backupSetSize_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BackupsLevel, backupsLevel_);
      DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
      DARABONBA_PTR_TO_JSON(ExpectExpireType, expectExpireType_);
      DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupSetSize, backupSetSize_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BackupsLevel, backupsLevel_);
      DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
      DARABONBA_PTR_FROM_JSON(ExpectExpireType, expectExpireType_);
      DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
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
    virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && return this->backupId_ == nullptr && return this->backupMethod_ == nullptr && return this->backupMode_ == nullptr && return this->backupSetSize_ == nullptr && return this->backupStartTime_ == nullptr
        && return this->backupStatus_ == nullptr && return this->backupType_ == nullptr && return this->backupsLevel_ == nullptr && return this->consistentTime_ == nullptr && return this->DBClusterId_ == nullptr
        && return this->expectExpireTime_ == nullptr && return this->expectExpireType_ == nullptr && return this->isAvail_ == nullptr; };
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


    // backupSetSize Field Functions 
    bool hasBackupSetSize() const { return this->backupSetSize_ != nullptr;};
    void deleteBackupSetSize() { this->backupSetSize_ = nullptr;};
    inline string backupSetSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSize_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupSetSize(string backupSetSize) { DARABONBA_PTR_SET_VALUE(backupSetSize_, backupSetSize) };


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


    // backupsLevel Field Functions 
    bool hasBackupsLevel() const { return this->backupsLevel_ != nullptr;};
    void deleteBackupsLevel() { this->backupsLevel_ = nullptr;};
    inline string backupsLevel() const { DARABONBA_PTR_GET_DEFAULT(backupsLevel_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupsLevel(string backupsLevel) { DARABONBA_PTR_SET_VALUE(backupsLevel_, backupsLevel) };


    // consistentTime Field Functions 
    bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
    void deleteConsistentTime() { this->consistentTime_ = nullptr;};
    inline string consistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setConsistentTime(string consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // expectExpireTime Field Functions 
    bool hasExpectExpireTime() const { return this->expectExpireTime_ != nullptr;};
    void deleteExpectExpireTime() { this->expectExpireTime_ = nullptr;};
    inline string expectExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expectExpireTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setExpectExpireTime(string expectExpireTime) { DARABONBA_PTR_SET_VALUE(expectExpireTime_, expectExpireTime) };


    // expectExpireType Field Functions 
    bool hasExpectExpireType() const { return this->expectExpireType_ != nullptr;};
    void deleteExpectExpireType() { this->expectExpireType_ = nullptr;};
    inline string expectExpireType() const { DARABONBA_PTR_GET_DEFAULT(expectExpireType_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setExpectExpireType(string expectExpireType) { DARABONBA_PTR_SET_VALUE(expectExpireType_, expectExpireType) };


    // isAvail Field Functions 
    bool hasIsAvail() const { return this->isAvail_ != nullptr;};
    void deleteIsAvail() { this->isAvail_ = nullptr;};
    inline string isAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setIsAvail(string isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


  protected:
    // The end time of the backup task. The time is displayed in UTC.
    std::shared_ptr<string> backupEndTime_ = nullptr;
    // The ID of the backup set.
    std::shared_ptr<string> backupId_ = nullptr;
    // The backup method. Only **Snapshot** may be returned.
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    std::shared_ptr<string> backupMode_ = nullptr;
    // The size of the backup set. Unit: bytes.
    // 
    // > After you delete the target snapshot backups, the storage space that is consumed by the backups is released. The released storage space is smaller than the size of the backup file, because the snapshots share specific data blocks. For more information, see [FAQ about backup](https://help.aliyun.com/document_detail/164881.html).
    std::shared_ptr<string> backupSetSize_ = nullptr;
    // The start time of the backup task. The time is displayed in UTC. Unit: seconds.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The status of the backup set. Valid values:
    // 
    // *   **Success**
    // *   **Failed**
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The type of the backup. Only **FullBackup** may be returned.
    std::shared_ptr<string> backupType_ = nullptr;
    // The level of the backup set. Valid values:
    // 
    // *   **Level-1**
    // *   **Level-2**
    std::shared_ptr<string> backupsLevel_ = nullptr;
    // The snapshot checkpoint time. The value follows the Unix time format. Unit: seconds.
    std::shared_ptr<string> consistentTime_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The expected expiration time of the backup set (This parameter is supported only for clusters for which sparse backup is enabled).
    std::shared_ptr<string> expectExpireTime_ = nullptr;
    // The expected expiration type of the backup set (This parameter is supported only for instances that are enabled with sparse backup).
    // 
    // Valid values:
    // 
    // *   NEVER
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   EXPIRED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DELAY
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> expectExpireType_ = nullptr;
    // Indicates whether the backup set is available. Valid values:
    // 
    // *   **0**: The backup set is unavailable.
    // *   **1**: The backup set is available.
    std::shared_ptr<string> isAvail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
