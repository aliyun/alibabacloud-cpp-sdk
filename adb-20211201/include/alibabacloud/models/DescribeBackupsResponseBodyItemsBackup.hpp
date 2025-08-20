// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
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
      DARABONBA_PTR_TO_JSON(BackupRegion, backupRegion_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ParentBackupId, parentBackupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyItemsBackup& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupExpiredTime, backupExpiredTime_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupRegion, backupRegion_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ParentBackupId, parentBackupId_);
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
    virtual bool empty() const override { this->backupEndTime_ != nullptr
        && this->backupExpiredTime_ != nullptr && this->backupId_ != nullptr && this->backupMethod_ != nullptr && this->backupRegion_ != nullptr && this->backupSize_ != nullptr
        && this->backupStartTime_ != nullptr && this->backupType_ != nullptr && this->DBClusterId_ != nullptr && this->parentBackupId_ != nullptr; };
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


    // backupRegion Field Functions 
    bool hasBackupRegion() const { return this->backupRegion_ != nullptr;};
    void deleteBackupRegion() { this->backupRegion_ = nullptr;};
    inline string backupRegion() const { DARABONBA_PTR_GET_DEFAULT(backupRegion_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupRegion(string backupRegion) { DARABONBA_PTR_SET_VALUE(backupRegion_, backupRegion) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int32_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0) };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupSize(int32_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


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


    // parentBackupId Field Functions 
    bool hasParentBackupId() const { return this->parentBackupId_ != nullptr;};
    void deleteParentBackupId() { this->parentBackupId_ = nullptr;};
    inline string parentBackupId() const { DARABONBA_PTR_GET_DEFAULT(parentBackupId_, "") };
    inline DescribeBackupsResponseBodyItemsBackup& setParentBackupId(string parentBackupId) { DARABONBA_PTR_SET_VALUE(parentBackupId_, parentBackupId) };


  protected:
    // The end time of the backup.
    std::shared_ptr<string> backupEndTime_ = nullptr;
    std::shared_ptr<string> backupExpiredTime_ = nullptr;
    // The backup set ID.
    std::shared_ptr<string> backupId_ = nullptr;
    // The backup method. Snapshot is returned.
    std::shared_ptr<string> backupMethod_ = nullptr;
    std::shared_ptr<string> backupRegion_ = nullptr;
    // The size of the backup set. Unit: bytes.
    std::shared_ptr<int32_t> backupSize_ = nullptr;
    // The start time of the backup.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The backup type. Valid values:
    // 
    // *   **FullBackup**
    // *   **IncrementalBackup**
    std::shared_ptr<string> backupType_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> parentBackupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
