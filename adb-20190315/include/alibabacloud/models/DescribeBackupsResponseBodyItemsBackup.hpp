// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeBackupsResponseBodyItemsBackup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupExpiredTime, backupExpiredTime_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupExpiredTime, backupExpiredTime_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
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
        && return this->backupExpiredTime_ == nullptr && return this->backupId_ == nullptr && return this->backupMethod_ == nullptr && return this->backupSize_ == nullptr && return this->backupStartTime_ == nullptr
        && return this->backupStatus_ == nullptr && return this->backupType_ == nullptr && return this->DBClusterId_ == nullptr; };
    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline string backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupExpiredTime Field Functions 
    bool hasBackupExpiredTime() const { return this->backupExpiredTime_ != nullptr;};
    void deleteBackupExpiredTime() { this->backupExpiredTime_ = nullptr;};
    inline string backupExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(backupExpiredTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupExpiredTime(string backupExpiredTime) { DARABONBA_PTR_SET_VALUE(backupExpiredTime_, backupExpiredTime) };


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


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The end time of the backup.
    std::shared_ptr<string> backupEndTime_ = nullptr;
    // The expiration time of the backup set.
    std::shared_ptr<string> backupExpiredTime_ = nullptr;
    // The backup set ID.
    std::shared_ptr<string> backupId_ = nullptr;
    // The backup method. Only Snapshot is returned.
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The size of the backup set. Unit: bytes.
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    // The start time of the backup.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The backup type. Valid values:
    // 
    // *   **FullBackup**
    // *   **IncrementalBackup**
    std::shared_ptr<string> backupType_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
