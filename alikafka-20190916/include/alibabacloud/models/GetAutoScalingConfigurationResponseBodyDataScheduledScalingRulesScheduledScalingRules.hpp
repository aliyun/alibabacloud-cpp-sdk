// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATASCHEDULEDSCALINGRULESSCHEDULEDSCALINGRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGCONFIGURATIONRESPONSEBODYDATASCHEDULEDSCALINGRULESSCHEDULEDSCALINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& obj) { 
      DARABONBA_PTR_TO_JSON(DurationMinutes, durationMinutes_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EstimatedElasticScalingDownTimeSecs, estimatedElasticScalingDownTimeSecs_);
      DARABONBA_PTR_TO_JSON(EstimatedElasticScalingUpTimeSecs, estimatedElasticScalingUpTimeSecs_);
      DARABONBA_PTR_TO_JSON(FirstScheduledTime, firstScheduledTime_);
      DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_TO_JSON(ReservedPubFlow, reservedPubFlow_);
      DARABONBA_PTR_TO_JSON(ReservedSubFlow, reservedSubFlow_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(WeeklyTypes, weeklyTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationMinutes, durationMinutes_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EstimatedElasticScalingDownTimeSecs, estimatedElasticScalingDownTimeSecs_);
      DARABONBA_PTR_FROM_JSON(EstimatedElasticScalingUpTimeSecs, estimatedElasticScalingUpTimeSecs_);
      DARABONBA_PTR_FROM_JSON(FirstScheduledTime, firstScheduledTime_);
      DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_FROM_JSON(ReservedPubFlow, reservedPubFlow_);
      DARABONBA_PTR_FROM_JSON(ReservedSubFlow, reservedSubFlow_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(WeeklyTypes, weeklyTypes_);
    };
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules() = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules(const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules &) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules(GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules &&) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules() = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& operator=(const GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules &) = default ;
    GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& operator=(GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->durationMinutes_ != nullptr
        && this->enable_ != nullptr && this->estimatedElasticScalingDownTimeSecs_ != nullptr && this->estimatedElasticScalingUpTimeSecs_ != nullptr && this->firstScheduledTime_ != nullptr && this->repeatType_ != nullptr
        && this->reservedPubFlow_ != nullptr && this->reservedSubFlow_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->scheduleType_ != nullptr
        && this->timeZone_ != nullptr && this->weeklyTypes_ != nullptr; };
    // durationMinutes Field Functions 
    bool hasDurationMinutes() const { return this->durationMinutes_ != nullptr;};
    void deleteDurationMinutes() { this->durationMinutes_ = nullptr;};
    inline int64_t durationMinutes() const { DARABONBA_PTR_GET_DEFAULT(durationMinutes_, 0L) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setDurationMinutes(int64_t durationMinutes) { DARABONBA_PTR_SET_VALUE(durationMinutes_, durationMinutes) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // estimatedElasticScalingDownTimeSecs Field Functions 
    bool hasEstimatedElasticScalingDownTimeSecs() const { return this->estimatedElasticScalingDownTimeSecs_ != nullptr;};
    void deleteEstimatedElasticScalingDownTimeSecs() { this->estimatedElasticScalingDownTimeSecs_ = nullptr;};
    inline int64_t estimatedElasticScalingDownTimeSecs() const { DARABONBA_PTR_GET_DEFAULT(estimatedElasticScalingDownTimeSecs_, 0L) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setEstimatedElasticScalingDownTimeSecs(int64_t estimatedElasticScalingDownTimeSecs) { DARABONBA_PTR_SET_VALUE(estimatedElasticScalingDownTimeSecs_, estimatedElasticScalingDownTimeSecs) };


    // estimatedElasticScalingUpTimeSecs Field Functions 
    bool hasEstimatedElasticScalingUpTimeSecs() const { return this->estimatedElasticScalingUpTimeSecs_ != nullptr;};
    void deleteEstimatedElasticScalingUpTimeSecs() { this->estimatedElasticScalingUpTimeSecs_ = nullptr;};
    inline int64_t estimatedElasticScalingUpTimeSecs() const { DARABONBA_PTR_GET_DEFAULT(estimatedElasticScalingUpTimeSecs_, 0L) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setEstimatedElasticScalingUpTimeSecs(int64_t estimatedElasticScalingUpTimeSecs) { DARABONBA_PTR_SET_VALUE(estimatedElasticScalingUpTimeSecs_, estimatedElasticScalingUpTimeSecs) };


    // firstScheduledTime Field Functions 
    bool hasFirstScheduledTime() const { return this->firstScheduledTime_ != nullptr;};
    void deleteFirstScheduledTime() { this->firstScheduledTime_ = nullptr;};
    inline int64_t firstScheduledTime() const { DARABONBA_PTR_GET_DEFAULT(firstScheduledTime_, 0L) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setFirstScheduledTime(int64_t firstScheduledTime) { DARABONBA_PTR_SET_VALUE(firstScheduledTime_, firstScheduledTime) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string repeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // reservedPubFlow Field Functions 
    bool hasReservedPubFlow() const { return this->reservedPubFlow_ != nullptr;};
    void deleteReservedPubFlow() { this->reservedPubFlow_ = nullptr;};
    inline int64_t reservedPubFlow() const { DARABONBA_PTR_GET_DEFAULT(reservedPubFlow_, 0L) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setReservedPubFlow(int64_t reservedPubFlow) { DARABONBA_PTR_SET_VALUE(reservedPubFlow_, reservedPubFlow) };


    // reservedSubFlow Field Functions 
    bool hasReservedSubFlow() const { return this->reservedSubFlow_ != nullptr;};
    void deleteReservedSubFlow() { this->reservedSubFlow_ = nullptr;};
    inline int64_t reservedSubFlow() const { DARABONBA_PTR_GET_DEFAULT(reservedSubFlow_, 0L) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setReservedSubFlow(int64_t reservedSubFlow) { DARABONBA_PTR_SET_VALUE(reservedSubFlow_, reservedSubFlow) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // weeklyTypes Field Functions 
    bool hasWeeklyTypes() const { return this->weeklyTypes_ != nullptr;};
    void deleteWeeklyTypes() { this->weeklyTypes_ = nullptr;};
    inline const Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes & weeklyTypes() const { DARABONBA_PTR_GET_CONST(weeklyTypes_, Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes) };
    inline Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes weeklyTypes() { DARABONBA_PTR_GET(weeklyTypes_, Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setWeeklyTypes(const Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes & weeklyTypes) { DARABONBA_PTR_SET_VALUE(weeklyTypes_, weeklyTypes) };
    inline GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules& setWeeklyTypes(Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes && weeklyTypes) { DARABONBA_PTR_SET_RVALUE(weeklyTypes_, weeklyTypes) };


  protected:
    // The duration of a scheduled scaling task. Unit: minutes.
    std::shared_ptr<int64_t> durationMinutes_ = nullptr;
    // Indicates whether the scheduled scaling rule is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enable_ = nullptr;
    // The estimated scale-in duration. Unit: seconds.
    std::shared_ptr<int64_t> estimatedElasticScalingDownTimeSecs_ = nullptr;
    // The estimated scale-out duration. Unit: seconds.
    std::shared_ptr<int64_t> estimatedElasticScalingUpTimeSecs_ = nullptr;
    // The timestamp that indicates the start time of the scheduled scaling task.
    std::shared_ptr<int64_t> firstScheduledTime_ = nullptr;
    // The frequency at which the scheduled scaling task is executed. This parameter is returned only if ScheduleType is set to repeat. Valid values:
    // 
    // *   Daily: The scheduled scaling task is executed every day.
    // 
    // *   Weekly: The scheduled scaling task is executed every week.
    std::shared_ptr<string> repeatType_ = nullptr;
    // The reserved production capacity for scheduled scaling. Unit: MB/s.
    std::shared_ptr<int64_t> reservedPubFlow_ = nullptr;
    // The reserved consumption capacity for scheduled scaling. Unit: MB/s.
    std::shared_ptr<int64_t> reservedSubFlow_ = nullptr;
    // The ID of the scheduled scaling rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the scheduled scaling rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the scheduled scaling task. Valid values:
    // 
    // *   at: The scheduled scaling task is executed only once.
    // *   repeat: The scheduled scaling task is repeatedly executed.
    std::shared_ptr<string> scheduleType_ = nullptr;
    // The time zone in Coordinated Universal Time (UTC).
    std::shared_ptr<string> timeZone_ = nullptr;
    // The day on which the scheduled scaling task is repeatedly executed. You can specify multiple days for this parameter.
    std::shared_ptr<Models::GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes> weeklyTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
