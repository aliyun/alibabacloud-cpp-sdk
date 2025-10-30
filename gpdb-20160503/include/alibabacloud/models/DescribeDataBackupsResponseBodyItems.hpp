// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABACKUPSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABACKUPSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataBackupsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupEndTimeLocal, backupEndTimeLocal_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStartTimeLocal, backupStartTimeLocal_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BaksetName, baksetName_);
      DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataBackupsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupEndTimeLocal, backupEndTimeLocal_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStartTimeLocal, backupStartTimeLocal_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BaksetName, baksetName_);
      DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
    };
    DescribeDataBackupsResponseBodyItems() = default ;
    DescribeDataBackupsResponseBodyItems(const DescribeDataBackupsResponseBodyItems &) = default ;
    DescribeDataBackupsResponseBodyItems(DescribeDataBackupsResponseBodyItems &&) = default ;
    DescribeDataBackupsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataBackupsResponseBodyItems() = default ;
    DescribeDataBackupsResponseBodyItems& operator=(const DescribeDataBackupsResponseBodyItems &) = default ;
    DescribeDataBackupsResponseBodyItems& operator=(DescribeDataBackupsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && return this->backupEndTimeLocal_ == nullptr && return this->backupMethod_ == nullptr && return this->backupMode_ == nullptr && return this->backupSetId_ == nullptr && return this->backupSize_ == nullptr
        && return this->backupStartTime_ == nullptr && return this->backupStartTimeLocal_ == nullptr && return this->backupStatus_ == nullptr && return this->baksetName_ == nullptr && return this->consistentTime_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->dataType_ == nullptr; };
    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline string backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupEndTimeLocal Field Functions 
    bool hasBackupEndTimeLocal() const { return this->backupEndTimeLocal_ != nullptr;};
    void deleteBackupEndTimeLocal() { this->backupEndTimeLocal_ = nullptr;};
    inline string backupEndTimeLocal() const { DARABONBA_PTR_GET_DEFAULT(backupEndTimeLocal_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupEndTimeLocal(string backupEndTimeLocal) { DARABONBA_PTR_SET_VALUE(backupEndTimeLocal_, backupEndTimeLocal) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeDataBackupsResponseBodyItems& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStartTimeLocal Field Functions 
    bool hasBackupStartTimeLocal() const { return this->backupStartTimeLocal_ != nullptr;};
    void deleteBackupStartTimeLocal() { this->backupStartTimeLocal_ = nullptr;};
    inline string backupStartTimeLocal() const { DARABONBA_PTR_GET_DEFAULT(backupStartTimeLocal_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupStartTimeLocal(string backupStartTimeLocal) { DARABONBA_PTR_SET_VALUE(backupStartTimeLocal_, backupStartTimeLocal) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // baksetName Field Functions 
    bool hasBaksetName() const { return this->baksetName_ != nullptr;};
    void deleteBaksetName() { this->baksetName_ = nullptr;};
    inline string baksetName() const { DARABONBA_PTR_GET_DEFAULT(baksetName_, "") };
    inline DescribeDataBackupsResponseBodyItems& setBaksetName(string baksetName) { DARABONBA_PTR_SET_VALUE(baksetName_, baksetName) };


    // consistentTime Field Functions 
    bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
    void deleteConsistentTime() { this->consistentTime_ = nullptr;};
    inline int64_t consistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, 0L) };
    inline DescribeDataBackupsResponseBodyItems& setConsistentTime(int64_t consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDataBackupsResponseBodyItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeDataBackupsResponseBodyItems& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


  protected:
    // The UTC time when the backup ended. The time is in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> backupEndTime_ = nullptr;
    // The local time when the backup ended. The time is in the yyyy-MM-dd HH:mm:ss format. The time is your local time.
    std::shared_ptr<string> backupEndTimeLocal_ = nullptr;
    // The method that is used to generate the backup set. Valid values:
    // 
    // *   **Logical**: logical backup
    // *   **Physical**: physical backup
    // *   **Snapshot**: snapshot backup
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The backup mode.
    // 
    // Valid values for full backup:
    // 
    // *   Automated: automatic backup
    // *   Manual: manual backup
    // 
    // Valid values for point-in-time backup:
    // 
    // *   Automated: point-in-time backup after full backup
    // *   Manual: manual point-in-time backup
    // *   Period: point-in-time backup that is triggered by a backup policy
    std::shared_ptr<string> backupMode_ = nullptr;
    // The ID of the backup set.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The size of the backup file. Unit: bytes.
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    // The UTC time when the backup started. The time is in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The local time when the backup started. The time is in the yyyy-MM-dd HH:mm:ss format. The time is your local time.
    std::shared_ptr<string> backupStartTimeLocal_ = nullptr;
    // The status of the backup set. Valid values:
    // 
    // *   Success
    // *   Failure
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The name of a point-in-time backup set or the full backup set.
    std::shared_ptr<string> baksetName_ = nullptr;
    // *   For full backup, this parameter indicates the point in time at which the data in the data backup file is consistent.
    // *   For point-in-time backup, this parameter indicates that the returned point in time is a timestamp.
    std::shared_ptr<int64_t> consistentTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The type of the backup. Valid values:
    // 
    // *   DATA: full backup
    // *   RESTOREPOI: point-in-time backup
    std::shared_ptr<string> dataType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
