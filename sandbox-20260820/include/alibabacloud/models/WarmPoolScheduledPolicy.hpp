// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WARMPOOLSCHEDULEDPOLICY_HPP_
#define ALIBABACLOUD_MODELS_WARMPOOLSCHEDULEDPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class WarmPoolScheduledPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WarmPoolScheduledPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(scheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, WarmPoolScheduledPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(scheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    WarmPoolScheduledPolicy() = default ;
    WarmPoolScheduledPolicy(const WarmPoolScheduledPolicy &) = default ;
    WarmPoolScheduledPolicy(WarmPoolScheduledPolicy &&) = default ;
    WarmPoolScheduledPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WarmPoolScheduledPolicy() = default ;
    WarmPoolScheduledPolicy& operator=(const WarmPoolScheduledPolicy &) = default ;
    WarmPoolScheduledPolicy& operator=(WarmPoolScheduledPolicy &&) = default ;
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
    inline WarmPoolScheduledPolicy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WarmPoolScheduledPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string getScheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline WarmPoolScheduledPolicy& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline WarmPoolScheduledPolicy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int64_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
    inline WarmPoolScheduledPolicy& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline WarmPoolScheduledPolicy& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The end time when the rule expires, in RFC 3339 format.
    shared_ptr<string> endTime_ {};
    // The name of the scheduled rule. It must be unique within the same warm pool.
    shared_ptr<string> name_ {};
    // The cron expression for the scheduled rule, in the cron (second minute hour day month week) format.
    shared_ptr<string> scheduleExpression_ {};
    // The start time when the rule takes effect, in RFC 3339 format.
    shared_ptr<string> startTime_ {};
    // The target number of ready sandboxes after the rule is triggered. The value can be 0.
    shared_ptr<int64_t> target_ {};
    // The IANA time zone used to execute the scheduled rule.
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
