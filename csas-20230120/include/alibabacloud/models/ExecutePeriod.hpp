// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEPERIOD_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ExecutePeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecutePeriod& obj) { 
      DARABONBA_PTR_TO_JSON(EffectDay, effectDay_);
      DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_TO_JSON(ScheduleEffect, scheduleEffect_);
      DARABONBA_PTR_TO_JSON(ValidType, validType_);
    };
    friend void from_json(const Darabonba::Json& j, ExecutePeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectDay, effectDay_);
      DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleEffect, scheduleEffect_);
      DARABONBA_PTR_FROM_JSON(ValidType, validType_);
    };
    ExecutePeriod() = default ;
    ExecutePeriod(const ExecutePeriod &) = default ;
    ExecutePeriod(ExecutePeriod &&) = default ;
    ExecutePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecutePeriod() = default ;
    ExecutePeriod& operator=(const ExecutePeriod &) = default ;
    ExecutePeriod& operator=(ExecutePeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduleEffect : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleEffect& obj) { 
        DARABONBA_PTR_TO_JSON(Frequency, frequency_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleEffect& obj) { 
        DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
      };
      ScheduleEffect() = default ;
      ScheduleEffect(const ScheduleEffect &) = default ;
      ScheduleEffect(ScheduleEffect &&) = default ;
      ScheduleEffect(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleEffect() = default ;
      ScheduleEffect& operator=(const ScheduleEffect &) = default ;
      ScheduleEffect& operator=(ScheduleEffect &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->frequency_ == nullptr
        && this->interval_ == nullptr; };
      // frequency Field Functions 
      bool hasFrequency() const { return this->frequency_ != nullptr;};
      void deleteFrequency() { this->frequency_ = nullptr;};
      inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
      inline ScheduleEffect& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
      inline ScheduleEffect& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    protected:
      shared_ptr<string> frequency_ {};
      shared_ptr<int64_t> interval_ {};
    };

    class EffectTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EffectTime& obj) { 
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Start, start_);
      };
      friend void from_json(const Darabonba::Json& j, EffectTime& obj) { 
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
      };
      EffectTime() = default ;
      EffectTime(const EffectTime &) = default ;
      EffectTime(EffectTime &&) = default ;
      EffectTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EffectTime() = default ;
      EffectTime& operator=(const EffectTime &) = default ;
      EffectTime& operator=(EffectTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
      inline EffectTime& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
      inline EffectTime& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      shared_ptr<string> end_ {};
      shared_ptr<string> start_ {};
    };

    class EffectDay : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EffectDay& obj) { 
        DARABONBA_PTR_TO_JSON(Friday, friday_);
        DARABONBA_PTR_TO_JSON(Monday, monday_);
        DARABONBA_PTR_TO_JSON(Saturday, saturday_);
        DARABONBA_PTR_TO_JSON(Sunday, sunday_);
        DARABONBA_PTR_TO_JSON(Thursday, thursday_);
        DARABONBA_PTR_TO_JSON(Tuesday, tuesday_);
        DARABONBA_PTR_TO_JSON(Wednesday, wednesday_);
      };
      friend void from_json(const Darabonba::Json& j, EffectDay& obj) { 
        DARABONBA_PTR_FROM_JSON(Friday, friday_);
        DARABONBA_PTR_FROM_JSON(Monday, monday_);
        DARABONBA_PTR_FROM_JSON(Saturday, saturday_);
        DARABONBA_PTR_FROM_JSON(Sunday, sunday_);
        DARABONBA_PTR_FROM_JSON(Thursday, thursday_);
        DARABONBA_PTR_FROM_JSON(Tuesday, tuesday_);
        DARABONBA_PTR_FROM_JSON(Wednesday, wednesday_);
      };
      EffectDay() = default ;
      EffectDay(const EffectDay &) = default ;
      EffectDay(EffectDay &&) = default ;
      EffectDay(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EffectDay() = default ;
      EffectDay& operator=(const EffectDay &) = default ;
      EffectDay& operator=(EffectDay &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->friday_ == nullptr
        && this->monday_ == nullptr && this->saturday_ == nullptr && this->sunday_ == nullptr && this->thursday_ == nullptr && this->tuesday_ == nullptr
        && this->wednesday_ == nullptr; };
      // friday Field Functions 
      bool hasFriday() const { return this->friday_ != nullptr;};
      void deleteFriday() { this->friday_ = nullptr;};
      inline bool getFriday() const { DARABONBA_PTR_GET_DEFAULT(friday_, false) };
      inline EffectDay& setFriday(bool friday) { DARABONBA_PTR_SET_VALUE(friday_, friday) };


      // monday Field Functions 
      bool hasMonday() const { return this->monday_ != nullptr;};
      void deleteMonday() { this->monday_ = nullptr;};
      inline bool getMonday() const { DARABONBA_PTR_GET_DEFAULT(monday_, false) };
      inline EffectDay& setMonday(bool monday) { DARABONBA_PTR_SET_VALUE(monday_, monday) };


      // saturday Field Functions 
      bool hasSaturday() const { return this->saturday_ != nullptr;};
      void deleteSaturday() { this->saturday_ = nullptr;};
      inline bool getSaturday() const { DARABONBA_PTR_GET_DEFAULT(saturday_, false) };
      inline EffectDay& setSaturday(bool saturday) { DARABONBA_PTR_SET_VALUE(saturday_, saturday) };


      // sunday Field Functions 
      bool hasSunday() const { return this->sunday_ != nullptr;};
      void deleteSunday() { this->sunday_ = nullptr;};
      inline bool getSunday() const { DARABONBA_PTR_GET_DEFAULT(sunday_, false) };
      inline EffectDay& setSunday(bool sunday) { DARABONBA_PTR_SET_VALUE(sunday_, sunday) };


      // thursday Field Functions 
      bool hasThursday() const { return this->thursday_ != nullptr;};
      void deleteThursday() { this->thursday_ = nullptr;};
      inline bool getThursday() const { DARABONBA_PTR_GET_DEFAULT(thursday_, false) };
      inline EffectDay& setThursday(bool thursday) { DARABONBA_PTR_SET_VALUE(thursday_, thursday) };


      // tuesday Field Functions 
      bool hasTuesday() const { return this->tuesday_ != nullptr;};
      void deleteTuesday() { this->tuesday_ = nullptr;};
      inline bool getTuesday() const { DARABONBA_PTR_GET_DEFAULT(tuesday_, false) };
      inline EffectDay& setTuesday(bool tuesday) { DARABONBA_PTR_SET_VALUE(tuesday_, tuesday) };


      // wednesday Field Functions 
      bool hasWednesday() const { return this->wednesday_ != nullptr;};
      void deleteWednesday() { this->wednesday_ = nullptr;};
      inline bool getWednesday() const { DARABONBA_PTR_GET_DEFAULT(wednesday_, false) };
      inline EffectDay& setWednesday(bool wednesday) { DARABONBA_PTR_SET_VALUE(wednesday_, wednesday) };


    protected:
      shared_ptr<bool> friday_ {};
      shared_ptr<bool> monday_ {};
      shared_ptr<bool> saturday_ {};
      shared_ptr<bool> sunday_ {};
      shared_ptr<bool> thursday_ {};
      shared_ptr<bool> tuesday_ {};
      shared_ptr<bool> wednesday_ {};
    };

    virtual bool empty() const override { return this->effectDay_ == nullptr
        && this->effectTime_ == nullptr && this->scheduleEffect_ == nullptr && this->validType_ == nullptr; };
    // effectDay Field Functions 
    bool hasEffectDay() const { return this->effectDay_ != nullptr;};
    void deleteEffectDay() { this->effectDay_ = nullptr;};
    inline const ExecutePeriod::EffectDay & getEffectDay() const { DARABONBA_PTR_GET_CONST(effectDay_, ExecutePeriod::EffectDay) };
    inline ExecutePeriod::EffectDay getEffectDay() { DARABONBA_PTR_GET(effectDay_, ExecutePeriod::EffectDay) };
    inline ExecutePeriod& setEffectDay(const ExecutePeriod::EffectDay & effectDay) { DARABONBA_PTR_SET_VALUE(effectDay_, effectDay) };
    inline ExecutePeriod& setEffectDay(ExecutePeriod::EffectDay && effectDay) { DARABONBA_PTR_SET_RVALUE(effectDay_, effectDay) };


    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline const ExecutePeriod::EffectTime & getEffectTime() const { DARABONBA_PTR_GET_CONST(effectTime_, ExecutePeriod::EffectTime) };
    inline ExecutePeriod::EffectTime getEffectTime() { DARABONBA_PTR_GET(effectTime_, ExecutePeriod::EffectTime) };
    inline ExecutePeriod& setEffectTime(const ExecutePeriod::EffectTime & effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };
    inline ExecutePeriod& setEffectTime(ExecutePeriod::EffectTime && effectTime) { DARABONBA_PTR_SET_RVALUE(effectTime_, effectTime) };


    // scheduleEffect Field Functions 
    bool hasScheduleEffect() const { return this->scheduleEffect_ != nullptr;};
    void deleteScheduleEffect() { this->scheduleEffect_ = nullptr;};
    inline const ExecutePeriod::ScheduleEffect & getScheduleEffect() const { DARABONBA_PTR_GET_CONST(scheduleEffect_, ExecutePeriod::ScheduleEffect) };
    inline ExecutePeriod::ScheduleEffect getScheduleEffect() { DARABONBA_PTR_GET(scheduleEffect_, ExecutePeriod::ScheduleEffect) };
    inline ExecutePeriod& setScheduleEffect(const ExecutePeriod::ScheduleEffect & scheduleEffect) { DARABONBA_PTR_SET_VALUE(scheduleEffect_, scheduleEffect) };
    inline ExecutePeriod& setScheduleEffect(ExecutePeriod::ScheduleEffect && scheduleEffect) { DARABONBA_PTR_SET_RVALUE(scheduleEffect_, scheduleEffect) };


    // validType Field Functions 
    bool hasValidType() const { return this->validType_ != nullptr;};
    void deleteValidType() { this->validType_ = nullptr;};
    inline string getValidType() const { DARABONBA_PTR_GET_DEFAULT(validType_, "") };
    inline ExecutePeriod& setValidType(string validType) { DARABONBA_PTR_SET_VALUE(validType_, validType) };


  protected:
    shared_ptr<ExecutePeriod::EffectDay> effectDay_ {};
    shared_ptr<ExecutePeriod::EffectTime> effectTime_ {};
    shared_ptr<ExecutePeriod::ScheduleEffect> scheduleEffect_ {};
    shared_ptr<string> validType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
