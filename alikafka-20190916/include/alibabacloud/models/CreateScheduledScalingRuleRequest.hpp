// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreateScheduledScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DurationMinutes, durationMinutes_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FirstScheduledTime, firstScheduledTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_TO_JSON(ReservedPubFlow, reservedPubFlow_);
      DARABONBA_PTR_TO_JSON(ReservedSubFlow, reservedSubFlow_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(WeeklyTypes, weeklyTypes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationMinutes, durationMinutes_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FirstScheduledTime, firstScheduledTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_FROM_JSON(ReservedPubFlow, reservedPubFlow_);
      DARABONBA_PTR_FROM_JSON(ReservedSubFlow, reservedSubFlow_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(WeeklyTypes, weeklyTypes_);
    };
    CreateScheduledScalingRuleRequest() = default ;
    CreateScheduledScalingRuleRequest(const CreateScheduledScalingRuleRequest &) = default ;
    CreateScheduledScalingRuleRequest(CreateScheduledScalingRuleRequest &&) = default ;
    CreateScheduledScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledScalingRuleRequest() = default ;
    CreateScheduledScalingRuleRequest& operator=(const CreateScheduledScalingRuleRequest &) = default ;
    CreateScheduledScalingRuleRequest& operator=(CreateScheduledScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->durationMinutes_ != nullptr
        && this->enable_ != nullptr && this->firstScheduledTime_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->repeatType_ != nullptr
        && this->reservedPubFlow_ != nullptr && this->reservedSubFlow_ != nullptr && this->ruleName_ != nullptr && this->scheduleType_ != nullptr && this->timeZone_ != nullptr
        && this->weeklyTypes_ != nullptr; };
    // durationMinutes Field Functions 
    bool hasDurationMinutes() const { return this->durationMinutes_ != nullptr;};
    void deleteDurationMinutes() { this->durationMinutes_ = nullptr;};
    inline int32_t durationMinutes() const { DARABONBA_PTR_GET_DEFAULT(durationMinutes_, 0) };
    inline CreateScheduledScalingRuleRequest& setDurationMinutes(int32_t durationMinutes) { DARABONBA_PTR_SET_VALUE(durationMinutes_, durationMinutes) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateScheduledScalingRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // firstScheduledTime Field Functions 
    bool hasFirstScheduledTime() const { return this->firstScheduledTime_ != nullptr;};
    void deleteFirstScheduledTime() { this->firstScheduledTime_ = nullptr;};
    inline int64_t firstScheduledTime() const { DARABONBA_PTR_GET_DEFAULT(firstScheduledTime_, 0L) };
    inline CreateScheduledScalingRuleRequest& setFirstScheduledTime(int64_t firstScheduledTime) { DARABONBA_PTR_SET_VALUE(firstScheduledTime_, firstScheduledTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateScheduledScalingRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateScheduledScalingRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string repeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline CreateScheduledScalingRuleRequest& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // reservedPubFlow Field Functions 
    bool hasReservedPubFlow() const { return this->reservedPubFlow_ != nullptr;};
    void deleteReservedPubFlow() { this->reservedPubFlow_ = nullptr;};
    inline int32_t reservedPubFlow() const { DARABONBA_PTR_GET_DEFAULT(reservedPubFlow_, 0) };
    inline CreateScheduledScalingRuleRequest& setReservedPubFlow(int32_t reservedPubFlow) { DARABONBA_PTR_SET_VALUE(reservedPubFlow_, reservedPubFlow) };


    // reservedSubFlow Field Functions 
    bool hasReservedSubFlow() const { return this->reservedSubFlow_ != nullptr;};
    void deleteReservedSubFlow() { this->reservedSubFlow_ = nullptr;};
    inline int32_t reservedSubFlow() const { DARABONBA_PTR_GET_DEFAULT(reservedSubFlow_, 0) };
    inline CreateScheduledScalingRuleRequest& setReservedSubFlow(int32_t reservedSubFlow) { DARABONBA_PTR_SET_VALUE(reservedSubFlow_, reservedSubFlow) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateScheduledScalingRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline CreateScheduledScalingRuleRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateScheduledScalingRuleRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // weeklyTypes Field Functions 
    bool hasWeeklyTypes() const { return this->weeklyTypes_ != nullptr;};
    void deleteWeeklyTypes() { this->weeklyTypes_ = nullptr;};
    inline const vector<string> & weeklyTypes() const { DARABONBA_PTR_GET_CONST(weeklyTypes_, vector<string>) };
    inline vector<string> weeklyTypes() { DARABONBA_PTR_GET(weeklyTypes_, vector<string>) };
    inline CreateScheduledScalingRuleRequest& setWeeklyTypes(const vector<string> & weeklyTypes) { DARABONBA_PTR_SET_VALUE(weeklyTypes_, weeklyTypes) };
    inline CreateScheduledScalingRuleRequest& setWeeklyTypes(vector<string> && weeklyTypes) { DARABONBA_PTR_SET_RVALUE(weeklyTypes_, weeklyTypes) };


  protected:
    // The duration of each scheduled scaling task. Unit: minutes.
    // 
    // >  The value of this parameter must be greater than or equal to 15.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> durationMinutes_ = nullptr;
    // Specifies whether to enable the scheduled scaling rule. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enable_ = nullptr;
    // The time when the scheduled scaling task is executed.
    // 
    // If you set ScheduleType to at, make sure that the value of this parameter is at least 30 minutes later than the current point in time.
    // 
    // >Notice: To prevent the broker from repeatedly executing instance upgrade and downgrade tasks, make sure that the interval between two consecutive scheduled scaling tasks is at least 60 minutes.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> firstScheduledTime_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The frequency to execute the scheduled scaling task. This parameter is required only if you set ScheduleType to repeat. Valid values:
    // 
    // *   Daily: The scheduled scaling task is executed every day.
    // 
    // *   Weekly: The scheduled scaling task is executed every week.
    std::shared_ptr<string> repeatType_ = nullptr;
    // The reserved production capacity for scheduled scaling. Unit: MB/s.
    // 
    // >  You must specify a higher value than the instance specification for at least one of ReservedPubFlow and ReservedSubFlow.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> reservedPubFlow_ = nullptr;
    // The reserved consumption capacity for scheduled scaling. Unit: MB/s.
    // 
    // >  You must specify a higher value than the instance specification for at least one of ReservedPubFlow and ReservedSubFlow.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> reservedSubFlow_ = nullptr;
    // The name of the scheduled scaling rule.
    // 
    // >  The name of the scheduled scaling rule cannot be the same as the names of other rules for the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the scheduled scaling task. Valid values:
    // 
    // *   at: The scheduled scaling task is executed only once.
    // *   repeat: The scheduled scaling task is repeatedly executed.
    // 
    // This parameter is required.
    std::shared_ptr<string> scheduleType_ = nullptr;
    // The time zone in Coordinated Universal Time (UTC).
    // 
    // This parameter is required.
    std::shared_ptr<string> timeZone_ = nullptr;
    // The day on which the scheduled scaling task is executed every week. You can specify multiple days.
    std::shared_ptr<vector<string>> weeklyTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
