// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBACKUPPLANSHRINKREQUESTRULE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBACKUPPLANSHRINKREQUESTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateBackupPlanShrinkRequestRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBackupPlanShrinkRequestRule& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(DoCopy, doCopy_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBackupPlanShrinkRequestRule& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(DoCopy, doCopy_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
    };
    UpdateBackupPlanShrinkRequestRule() = default ;
    UpdateBackupPlanShrinkRequestRule(const UpdateBackupPlanShrinkRequestRule &) = default ;
    UpdateBackupPlanShrinkRequestRule(UpdateBackupPlanShrinkRequestRule &&) = default ;
    UpdateBackupPlanShrinkRequestRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBackupPlanShrinkRequestRule() = default ;
    UpdateBackupPlanShrinkRequestRule& operator=(const UpdateBackupPlanShrinkRequestRule &) = default ;
    UpdateBackupPlanShrinkRequestRule& operator=(UpdateBackupPlanShrinkRequestRule &&) = default ;
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
    inline UpdateBackupPlanShrinkRequestRule& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline UpdateBackupPlanShrinkRequestRule& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // destinationRetention Field Functions 
    bool hasDestinationRetention() const { return this->destinationRetention_ != nullptr;};
    void deleteDestinationRetention() { this->destinationRetention_ = nullptr;};
    inline int64_t destinationRetention() const { DARABONBA_PTR_GET_DEFAULT(destinationRetention_, 0L) };
    inline UpdateBackupPlanShrinkRequestRule& setDestinationRetention(int64_t destinationRetention) { DARABONBA_PTR_SET_VALUE(destinationRetention_, destinationRetention) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline UpdateBackupPlanShrinkRequestRule& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // doCopy Field Functions 
    bool hasDoCopy() const { return this->doCopy_ != nullptr;};
    void deleteDoCopy() { this->doCopy_ = nullptr;};
    inline bool doCopy() const { DARABONBA_PTR_GET_DEFAULT(doCopy_, false) };
    inline UpdateBackupPlanShrinkRequestRule& setDoCopy(bool doCopy) { DARABONBA_PTR_SET_VALUE(doCopy_, doCopy) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline UpdateBackupPlanShrinkRequestRule& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateBackupPlanShrinkRequestRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateBackupPlanShrinkRequestRule& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


  protected:
    // The backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // The ID of the region where the remote backup vault resides.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // The retention period of the backup data. Unit: days.
    std::shared_ptr<int64_t> destinationRetention_ = nullptr;
    // Specifies whether to disable the policy.
    std::shared_ptr<bool> disabled_ = nullptr;
    // Specifies whether to enable remote replication.
    std::shared_ptr<bool> doCopy_ = nullptr;
    // The retention period of the backup data. Minimum value: 1. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The name of the backup policy.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The backup policy. Format: I|{startTime}|{interval}. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, I|1631685600|P1D specifies that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // startTime: the time at which the system starts to run a backup job. The time must follow the UNIX time format. Unit: seconds. interval: the interval at which the system runs a backup job. The interval must follow the ISO 8601 standard. For example, PT1H specifies an interval of one hour. P1D specifies an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
