// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SetBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_TO_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(DataBackupRetentionPeriod, dataBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupEndTime, preferredBackupEndTime_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupStartTime, preferredBackupStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, SetBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_FROM_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(DataBackupRetentionPeriod, dataBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupEndTime, preferredBackupEndTime_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupStartTime, preferredBackupStartTime_);
    };
    SetBackupPolicyRequest() = default ;
    SetBackupPolicyRequest(const SetBackupPolicyRequest &) = default ;
    SetBackupPolicyRequest(SetBackupPolicyRequest &&) = default ;
    SetBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetBackupPolicyRequest() = default ;
    SetBackupPolicyRequest& operator=(const SetBackupPolicyRequest &) = default ;
    SetBackupPolicyRequest& operator=(SetBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupDbNames_ != nullptr
        && this->backupLevel_ != nullptr && this->backupLog_ != nullptr && this->backupMode_ != nullptr && this->dataBackupRetentionPeriod_ != nullptr && this->drdsInstanceId_ != nullptr
        && this->logBackupRetentionPeriod_ != nullptr && this->preferredBackupEndTime_ != nullptr && this->preferredBackupPeriod_ != nullptr && this->preferredBackupStartTime_ != nullptr; };
    // backupDbNames Field Functions 
    bool hasBackupDbNames() const { return this->backupDbNames_ != nullptr;};
    void deleteBackupDbNames() { this->backupDbNames_ = nullptr;};
    inline string backupDbNames() const { DARABONBA_PTR_GET_DEFAULT(backupDbNames_, "") };
    inline SetBackupPolicyRequest& setBackupDbNames(string backupDbNames) { DARABONBA_PTR_SET_VALUE(backupDbNames_, backupDbNames) };


    // backupLevel Field Functions 
    bool hasBackupLevel() const { return this->backupLevel_ != nullptr;};
    void deleteBackupLevel() { this->backupLevel_ = nullptr;};
    inline string backupLevel() const { DARABONBA_PTR_GET_DEFAULT(backupLevel_, "") };
    inline SetBackupPolicyRequest& setBackupLevel(string backupLevel) { DARABONBA_PTR_SET_VALUE(backupLevel_, backupLevel) };


    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline string backupLog() const { DARABONBA_PTR_GET_DEFAULT(backupLog_, "") };
    inline SetBackupPolicyRequest& setBackupLog(string backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline SetBackupPolicyRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // dataBackupRetentionPeriod Field Functions 
    bool hasDataBackupRetentionPeriod() const { return this->dataBackupRetentionPeriod_ != nullptr;};
    void deleteDataBackupRetentionPeriod() { this->dataBackupRetentionPeriod_ = nullptr;};
    inline string dataBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataBackupRetentionPeriod_, "") };
    inline SetBackupPolicyRequest& setDataBackupRetentionPeriod(string dataBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataBackupRetentionPeriod_, dataBackupRetentionPeriod) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SetBackupPolicyRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline string logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, "") };
    inline SetBackupPolicyRequest& setLogBackupRetentionPeriod(string logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // preferredBackupEndTime Field Functions 
    bool hasPreferredBackupEndTime() const { return this->preferredBackupEndTime_ != nullptr;};
    void deletePreferredBackupEndTime() { this->preferredBackupEndTime_ = nullptr;};
    inline string preferredBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupEndTime_, "") };
    inline SetBackupPolicyRequest& setPreferredBackupEndTime(string preferredBackupEndTime) { DARABONBA_PTR_SET_VALUE(preferredBackupEndTime_, preferredBackupEndTime) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline SetBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupStartTime Field Functions 
    bool hasPreferredBackupStartTime() const { return this->preferredBackupStartTime_ != nullptr;};
    void deletePreferredBackupStartTime() { this->preferredBackupStartTime_ = nullptr;};
    inline string preferredBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupStartTime_, "") };
    inline SetBackupPolicyRequest& setPreferredBackupStartTime(string preferredBackupStartTime) { DARABONBA_PTR_SET_VALUE(preferredBackupStartTime_, preferredBackupStartTime) };


  protected:
    // The databases to be backed up. Separate multiple databases with commas (,).
    // 
    // >  This parameter takes effect only when the backup level is database level.
    std::shared_ptr<string> backupDbNames_ = nullptr;
    // The level of the backup. Valid values:
    // 
    // *   db: The database type.
    // *   instance: instance
    std::shared_ptr<string> backupLevel_ = nullptr;
    // Specifies whether to enable log Backup. Valid values:
    // 
    // *   1: enabled.
    // *   0: disabled.
    std::shared_ptr<string> backupLog_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **Logic **: logical backup
    // *   **phy**: physical backup
    std::shared_ptr<string> backupMode_ = nullptr;
    // The retention period of the backup data. Value range: 7 to 730.
    std::shared_ptr<string> dataBackupRetentionPeriod_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The log retention period. Valid values: 7 to 730. This value must be less than or equal to the number of data backup days.
    std::shared_ptr<string> logBackupRetentionPeriod_ = nullptr;
    // The end time of the backup.
    std::shared_ptr<string> preferredBackupEndTime_ = nullptr;
    // The backup cycle. Valid values:
    // 
    // *   0: Monday
    // *   1: Tuesday
    // *   2: Wednesday
    // *   3: Thursday
    // *   4: Friday
    // *   5: Saturday
    // *   6: Sunday
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The start time of the backup.
    std::shared_ptr<string> preferredBackupStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
