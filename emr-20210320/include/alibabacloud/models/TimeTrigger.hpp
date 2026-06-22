// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TIMETRIGGER_HPP_
#define ALIBABACLOUD_MODELS_TIMETRIGGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class TimeTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TimeTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, TimeTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LaunchExpirationTime, launchExpirationTime_);
      DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    TimeTrigger() = default ;
    TimeTrigger(const TimeTrigger &) = default ;
    TimeTrigger(TimeTrigger &&) = default ;
    TimeTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TimeTrigger() = default ;
    TimeTrigger& operator=(const TimeTrigger &) = default ;
    TimeTrigger& operator=(TimeTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->launchExpirationTime_ == nullptr && this->launchTime_ == nullptr && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline TimeTrigger& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // launchExpirationTime Field Functions 
    bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
    void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
    inline int32_t getLaunchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
    inline TimeTrigger& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline string getLaunchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, "") };
    inline TimeTrigger& setLaunchTime(string launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline TimeTrigger& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline TimeTrigger& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline TimeTrigger& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The timestamp that specifies the end time. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The time period during which a scheduled task can be retried after it fails. Unit: seconds. Valid values: 0 to 3600.
    shared_ptr<int32_t> launchExpirationTime_ {};
    // The execution time of the scaling rule. This parameter is required. The value is a string in the HH:MM format.
    // 
    // This parameter is required.
    shared_ptr<string> launchTime_ {};
    // The frequency of executing the specified rule whose trigger mode is scaling by time. Valid values:
    // 
    // *   DAILY
    // *   WEEKLY
    // *   MONTHLY
    shared_ptr<string> recurrenceType_ {};
    // The number of recurrences of the scheduled task. The value of this parameter depends on the value of RecurrenceType.
    // 
    // *   If the RecurrenceType parameter is set to DAILY, you can specify only one value for this parameter. Valid values: 1 to 31.
    // *   If the RecurrenceType parameter is set to WEEKLY, you can specify multiple values for this parameter and separate them with commas (,). The values MON, TUE, WED, THU, FRI, SAT, and SUN indicate the days from Monday to Sunday. For example, the value MON,FRI,SUN stands for Monday, Friday, and Sunday.
    // *   If the RecurrenceType parameter is set to MONTHLY, the value of this parameter is in the A-B or A,B format. The values of A and B are both in the range of 1 to 31. If you use the A-B format, the value of B must be greater than the value of A.
    shared_ptr<string> recurrenceValue_ {};
    // The timestamp that specifies the start time. This parameter is required. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
