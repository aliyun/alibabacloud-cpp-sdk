// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPLANREQUESTRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPLANREQUESTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateBackupPlanRequestRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPlanRequestRule& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(DoCopy, doCopy_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPlanRequestRule& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(DoCopy, doCopy_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
    };
    CreateBackupPlanRequestRule() = default ;
    CreateBackupPlanRequestRule(const CreateBackupPlanRequestRule &) = default ;
    CreateBackupPlanRequestRule(CreateBackupPlanRequestRule &&) = default ;
    CreateBackupPlanRequestRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPlanRequestRule() = default ;
    CreateBackupPlanRequestRule& operator=(const CreateBackupPlanRequestRule &) = default ;
    CreateBackupPlanRequestRule& operator=(CreateBackupPlanRequestRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupType_ != nullptr
        && this->destinationRegionId_ != nullptr && this->destinationRetention_ != nullptr && this->disabled_ != nullptr && this->doCopy_ != nullptr && this->retention_ != nullptr
        && this->ruleName_ != nullptr && this->schedule_ != nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateBackupPlanRequestRule& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline CreateBackupPlanRequestRule& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // destinationRetention Field Functions 
    bool hasDestinationRetention() const { return this->destinationRetention_ != nullptr;};
    void deleteDestinationRetention() { this->destinationRetention_ = nullptr;};
    inline int64_t destinationRetention() const { DARABONBA_PTR_GET_DEFAULT(destinationRetention_, 0L) };
    inline CreateBackupPlanRequestRule& setDestinationRetention(int64_t destinationRetention) { DARABONBA_PTR_SET_VALUE(destinationRetention_, destinationRetention) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline CreateBackupPlanRequestRule& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // doCopy Field Functions 
    bool hasDoCopy() const { return this->doCopy_ != nullptr;};
    void deleteDoCopy() { this->doCopy_ = nullptr;};
    inline bool doCopy() const { DARABONBA_PTR_GET_DEFAULT(doCopy_, false) };
    inline CreateBackupPlanRequestRule& setDoCopy(bool doCopy) { DARABONBA_PTR_SET_VALUE(doCopy_, doCopy) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline CreateBackupPlanRequestRule& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateBackupPlanRequestRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline CreateBackupPlanRequestRule& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


  protected:
    // Backup type.
    std::shared_ptr<string> backupType_ = nullptr;
    // ID of the region for offsite replication.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // Number of days to retain offsite backups.
    std::shared_ptr<int64_t> destinationRetention_ = nullptr;
    // Whether the rule is enabled.
    std::shared_ptr<bool> disabled_ = nullptr;
    // Whether to enable offsite replication.
    std::shared_ptr<bool> doCopy_ = nullptr;
    // Backup retention period.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // Rule name.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Backup strategy. Optional format: I|{startTime}|{interval}. This means that a backup task is executed every {interval} starting from {startTime}. Backup tasks for past times will not be executed. If the previous backup task has not been completed, the next backup task will not be triggered. For example, I|1631685600|P1D means a backup is performed every day starting from 2021-09-15 14:00:00.
    // 
    // - startTime: The start time of the backup, in UNIX time, in seconds.
    // - interval: ISO8601 time interval. For example, PT1H means an interval of one hour. P1D means an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
