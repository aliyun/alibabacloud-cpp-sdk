// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDPOLICY_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ScheduledPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduledPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(scheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduledPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(scheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    ScheduledPolicy() = default ;
    ScheduledPolicy(const ScheduledPolicy &) = default ;
    ScheduledPolicy(ScheduledPolicy &&) = default ;
    ScheduledPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduledPolicy() = default ;
    ScheduledPolicy& operator=(const ScheduledPolicy &) = default ;
    ScheduledPolicy& operator=(ScheduledPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->name_ == nullptr && this->scheduleExpression_ == nullptr && this->startTime_ == nullptr && this->target_ == nullptr && this->timeZone_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ScheduledPolicy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ScheduledPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string getScheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline ScheduledPolicy& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ScheduledPolicy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int64_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
    inline ScheduledPolicy& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ScheduledPolicy& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The end time.
    shared_ptr<string> endTime_ {};
    // The policy name.
    shared_ptr<string> name_ {};
    // The schedule configuration.
    shared_ptr<string> scheduleExpression_ {};
    // The start time.
    shared_ptr<string> startTime_ {};
    // The current number of target resources. If a metric-based auto scaling policy or a scheduled policy is in effect, this parameter specifies the number of resources calculated by the policy. Otherwise, this parameter specifies the default number of provisioned instances.
    // 
    // > How is this different from defaultTarget?<br>
    // > Assume that you set the number of provisioned instances to 1 and then add a scheduled auto scaling policy to set the number to 5 for a specific time period.<br>
    // >
    // > - When the scheduled policy is active, target is 5 and defaultTarget is 1.
    // >
    // > - When the scheduled policy is inactive, both target and defaultTarget are 1.
    shared_ptr<int64_t> target_ {};
    // The time zone. If this parameter is left empty, the times for startTime, endTime, and scheduleExpression must be in UTC format.
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
