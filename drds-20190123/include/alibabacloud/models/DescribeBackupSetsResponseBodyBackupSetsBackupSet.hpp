// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODYBACKUPSETSBACKUPSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODYBACKUPSETSBACKUPSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupSetsResponseBodyBackupSetsBackupSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetsResponseBodyBackupSetsBackupSet& obj) { 
      DARABONBA_PTR_TO_JSON(BackupConsitentTime, backupConsitentTime_);
      DARABONBA_PTR_TO_JSON(BackupDbs, backupDbs_);
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupTotalSize, backupTotalSize_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(EnableRecovery, enableRecovery_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetsResponseBodyBackupSetsBackupSet& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupConsitentTime, backupConsitentTime_);
      DARABONBA_PTR_FROM_JSON(BackupDbs, backupDbs_);
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupTotalSize, backupTotalSize_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(EnableRecovery, enableRecovery_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBackupSetsResponseBodyBackupSetsBackupSet() = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSet(const DescribeBackupSetsResponseBodyBackupSetsBackupSet &) = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSet(DescribeBackupSetsResponseBodyBackupSetsBackupSet &&) = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetsResponseBodyBackupSetsBackupSet() = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSet& operator=(const DescribeBackupSetsResponseBodyBackupSetsBackupSet &) = default ;
    DescribeBackupSetsResponseBodyBackupSetsBackupSet& operator=(DescribeBackupSetsResponseBodyBackupSetsBackupSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupConsitentTime_ != nullptr
        && this->backupDbs_ != nullptr && this->backupEndTime_ != nullptr && this->backupLevel_ != nullptr && this->backupMode_ != nullptr && this->backupStartTime_ != nullptr
        && this->backupTotalSize_ != nullptr && this->backupType_ != nullptr && this->enableRecovery_ != nullptr && this->id_ != nullptr && this->status_ != nullptr; };
    // backupConsitentTime Field Functions 
    bool hasBackupConsitentTime() const { return this->backupConsitentTime_ != nullptr;};
    void deleteBackupConsitentTime() { this->backupConsitentTime_ = nullptr;};
    inline string backupConsitentTime() const { DARABONBA_PTR_GET_DEFAULT(backupConsitentTime_, "") };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupConsitentTime(string backupConsitentTime) { DARABONBA_PTR_SET_VALUE(backupConsitentTime_, backupConsitentTime) };


    // backupDbs Field Functions 
    bool hasBackupDbs() const { return this->backupDbs_ != nullptr;};
    void deleteBackupDbs() { this->backupDbs_ = nullptr;};
    inline const Models::DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs & backupDbs() const { DARABONBA_PTR_GET_CONST(backupDbs_, Models::DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs) };
    inline Models::DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs backupDbs() { DARABONBA_PTR_GET(backupDbs_, Models::DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupDbs(const Models::DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs & backupDbs) { DARABONBA_PTR_SET_VALUE(backupDbs_, backupDbs) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupDbs(Models::DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs && backupDbs) { DARABONBA_PTR_SET_RVALUE(backupDbs_, backupDbs) };


    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline int64_t backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, 0L) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupEndTime(int64_t backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupLevel Field Functions 
    bool hasBackupLevel() const { return this->backupLevel_ != nullptr;};
    void deleteBackupLevel() { this->backupLevel_ = nullptr;};
    inline string backupLevel() const { DARABONBA_PTR_GET_DEFAULT(backupLevel_, "") };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupLevel(string backupLevel) { DARABONBA_PTR_SET_VALUE(backupLevel_, backupLevel) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline int64_t backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, 0L) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupStartTime(int64_t backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupTotalSize Field Functions 
    bool hasBackupTotalSize() const { return this->backupTotalSize_ != nullptr;};
    void deleteBackupTotalSize() { this->backupTotalSize_ = nullptr;};
    inline string backupTotalSize() const { DARABONBA_PTR_GET_DEFAULT(backupTotalSize_, "") };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupTotalSize(string backupTotalSize) { DARABONBA_PTR_SET_VALUE(backupTotalSize_, backupTotalSize) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // enableRecovery Field Functions 
    bool hasEnableRecovery() const { return this->enableRecovery_ != nullptr;};
    void deleteEnableRecovery() { this->enableRecovery_ = nullptr;};
    inline bool enableRecovery() const { DARABONBA_PTR_GET_DEFAULT(enableRecovery_, false) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setEnableRecovery(bool enableRecovery) { DARABONBA_PTR_SET_VALUE(enableRecovery_, enableRecovery) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeBackupSetsResponseBodyBackupSetsBackupSet& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Backup Recovery duration.
    std::shared_ptr<string> backupConsitentTime_ = nullptr;
    // The list of backup databases.
    std::shared_ptr<Models::DescribeBackupSetsResponseBodyBackupSetsBackupSetBackupDbs> backupDbs_ = nullptr;
    // The end of the backup time which is in timestamp format (measured in millisecond).
    // 
    // >  0 indicates not finished.
    std::shared_ptr<int64_t> backupEndTime_ = nullptr;
    // The level of the backup. Valid values:
    // 
    // *   db: The database level.
    // *   instance: the instance level.
    std::shared_ptr<string> backupLevel_ = nullptr;
    // The backup method. Valid values:
    // 
    // *   logic: the logical backup.
    // *   phy: fast backup
    std::shared_ptr<string> backupMode_ = nullptr;
    // The beginning of the backup time which is in timestamp format (measured in millisecond).
    std::shared_ptr<int64_t> backupStartTime_ = nullptr;
    // The size of the backup set. Unit: MB.
    std::shared_ptr<string> backupTotalSize_ = nullptr;
    // The type of the backup. Valid values:
    // 
    // *   manual: indicates a manual backup.
    // *   auto: indicates an automatic backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // Indicates whether the backup set can be restored. Valid values:
    std::shared_ptr<bool> enableRecovery_ = nullptr;
    // The ID of the data backup file you want to use.
    std::shared_ptr<string> id_ = nullptr;
    // The status of the backup instance. Valid values:
    // 
    // *   \\-1: Failed
    // *   0: Not started
    // *   1: The storage instance is running.
    // *   2: Success
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
