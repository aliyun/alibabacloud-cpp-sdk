// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRULESRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANRULESRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(DoCopy, doCopy_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(DoCopy, doCopy_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule(DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupType_ == nullptr
        && return this->destinationRegionId_ == nullptr && return this->destinationRetention_ == nullptr && return this->disabled_ == nullptr && return this->doCopy_ == nullptr && return this->retention_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->schedule_ == nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // destinationRetention Field Functions 
    bool hasDestinationRetention() const { return this->destinationRetention_ != nullptr;};
    void deleteDestinationRetention() { this->destinationRetention_ = nullptr;};
    inline int64_t destinationRetention() const { DARABONBA_PTR_GET_DEFAULT(destinationRetention_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setDestinationRetention(int64_t destinationRetention) { DARABONBA_PTR_SET_VALUE(destinationRetention_, destinationRetention) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // doCopy Field Functions 
    bool hasDoCopy() const { return this->doCopy_ != nullptr;};
    void deleteDoCopy() { this->doCopy_ = nullptr;};
    inline bool doCopy() const { DARABONBA_PTR_GET_DEFAULT(doCopy_, false) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setDoCopy(bool doCopy) { DARABONBA_PTR_SET_VALUE(doCopy_, doCopy) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanRulesRule& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


  protected:
    // The backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // The ID of the region in which the remote backup vault resides.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // The retention period of the backup data in remote backup mode. Unit: days.
    std::shared_ptr<int64_t> destinationRetention_ = nullptr;
    // Indicates whether the policy is disabled.
    std::shared_ptr<bool> disabled_ = nullptr;
    // Indicates whether the snapshot data is backed up to the backup vault.
    std::shared_ptr<bool> doCopy_ = nullptr;
    // The retention period of the backup data. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The policy name.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified by `{startTime}` and the subsequent backup jobs at an interval that is specified by `{interval}`. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   `startTime`: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
    // *   `interval`: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour. P1D indicates an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
