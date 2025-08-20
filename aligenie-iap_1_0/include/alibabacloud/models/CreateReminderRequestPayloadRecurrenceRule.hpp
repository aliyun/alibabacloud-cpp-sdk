// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMINDERREQUESTPAYLOADRECURRENCERULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMINDERREQUESTPAYLOADRECURRENCERULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CreateReminderRequestPayloadRecurrenceRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReminderRequestPayloadRecurrenceRule& obj) { 
      DARABONBA_PTR_TO_JSON(Day, day_);
      DARABONBA_PTR_TO_JSON(DaysOfMonth, daysOfMonth_);
      DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_TO_JSON(EndDateTime, endDateTime_);
      DARABONBA_PTR_TO_JSON(Freq, freq_);
      DARABONBA_PTR_TO_JSON(Hour, hour_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
      DARABONBA_PTR_TO_JSON(Month, month_);
      DARABONBA_PTR_TO_JSON(Second, second_);
      DARABONBA_PTR_TO_JSON(StartDateTime, startDateTime_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReminderRequestPayloadRecurrenceRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Day, day_);
      DARABONBA_PTR_FROM_JSON(DaysOfMonth, daysOfMonth_);
      DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_FROM_JSON(EndDateTime, endDateTime_);
      DARABONBA_PTR_FROM_JSON(Freq, freq_);
      DARABONBA_PTR_FROM_JSON(Hour, hour_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
      DARABONBA_PTR_FROM_JSON(Month, month_);
      DARABONBA_PTR_FROM_JSON(Second, second_);
      DARABONBA_PTR_FROM_JSON(StartDateTime, startDateTime_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    CreateReminderRequestPayloadRecurrenceRule() = default ;
    CreateReminderRequestPayloadRecurrenceRule(const CreateReminderRequestPayloadRecurrenceRule &) = default ;
    CreateReminderRequestPayloadRecurrenceRule(CreateReminderRequestPayloadRecurrenceRule &&) = default ;
    CreateReminderRequestPayloadRecurrenceRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReminderRequestPayloadRecurrenceRule() = default ;
    CreateReminderRequestPayloadRecurrenceRule& operator=(const CreateReminderRequestPayloadRecurrenceRule &) = default ;
    CreateReminderRequestPayloadRecurrenceRule& operator=(CreateReminderRequestPayloadRecurrenceRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->day_ != nullptr
        && this->daysOfMonth_ != nullptr && this->daysOfWeek_ != nullptr && this->endDateTime_ != nullptr && this->freq_ != nullptr && this->hour_ != nullptr
        && this->minute_ != nullptr && this->month_ != nullptr && this->second_ != nullptr && this->startDateTime_ != nullptr && this->year_ != nullptr; };
    // day Field Functions 
    bool hasDay() const { return this->day_ != nullptr;};
    void deleteDay() { this->day_ = nullptr;};
    inline int32_t day() const { DARABONBA_PTR_GET_DEFAULT(day_, 0) };
    inline CreateReminderRequestPayloadRecurrenceRule& setDay(int32_t day) { DARABONBA_PTR_SET_VALUE(day_, day) };


    // daysOfMonth Field Functions 
    bool hasDaysOfMonth() const { return this->daysOfMonth_ != nullptr;};
    void deleteDaysOfMonth() { this->daysOfMonth_ = nullptr;};
    inline const vector<int32_t> & daysOfMonth() const { DARABONBA_PTR_GET_CONST(daysOfMonth_, vector<int32_t>) };
    inline vector<int32_t> daysOfMonth() { DARABONBA_PTR_GET(daysOfMonth_, vector<int32_t>) };
    inline CreateReminderRequestPayloadRecurrenceRule& setDaysOfMonth(const vector<int32_t> & daysOfMonth) { DARABONBA_PTR_SET_VALUE(daysOfMonth_, daysOfMonth) };
    inline CreateReminderRequestPayloadRecurrenceRule& setDaysOfMonth(vector<int32_t> && daysOfMonth) { DARABONBA_PTR_SET_RVALUE(daysOfMonth_, daysOfMonth) };


    // daysOfWeek Field Functions 
    bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
    void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
    inline const vector<int32_t> & daysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
    inline vector<int32_t> daysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
    inline CreateReminderRequestPayloadRecurrenceRule& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
    inline CreateReminderRequestPayloadRecurrenceRule& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


    // endDateTime Field Functions 
    bool hasEndDateTime() const { return this->endDateTime_ != nullptr;};
    void deleteEndDateTime() { this->endDateTime_ = nullptr;};
    inline int64_t endDateTime() const { DARABONBA_PTR_GET_DEFAULT(endDateTime_, 0L) };
    inline CreateReminderRequestPayloadRecurrenceRule& setEndDateTime(int64_t endDateTime) { DARABONBA_PTR_SET_VALUE(endDateTime_, endDateTime) };


    // freq Field Functions 
    bool hasFreq() const { return this->freq_ != nullptr;};
    void deleteFreq() { this->freq_ = nullptr;};
    inline string freq() const { DARABONBA_PTR_GET_DEFAULT(freq_, "") };
    inline CreateReminderRequestPayloadRecurrenceRule& setFreq(string freq) { DARABONBA_PTR_SET_VALUE(freq_, freq) };


    // hour Field Functions 
    bool hasHour() const { return this->hour_ != nullptr;};
    void deleteHour() { this->hour_ = nullptr;};
    inline int32_t hour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
    inline CreateReminderRequestPayloadRecurrenceRule& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline int32_t minute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
    inline CreateReminderRequestPayloadRecurrenceRule& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline int32_t month() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
    inline CreateReminderRequestPayloadRecurrenceRule& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // second Field Functions 
    bool hasSecond() const { return this->second_ != nullptr;};
    void deleteSecond() { this->second_ = nullptr;};
    inline int32_t second() const { DARABONBA_PTR_GET_DEFAULT(second_, 0) };
    inline CreateReminderRequestPayloadRecurrenceRule& setSecond(int32_t second) { DARABONBA_PTR_SET_VALUE(second_, second) };


    // startDateTime Field Functions 
    bool hasStartDateTime() const { return this->startDateTime_ != nullptr;};
    void deleteStartDateTime() { this->startDateTime_ = nullptr;};
    inline int64_t startDateTime() const { DARABONBA_PTR_GET_DEFAULT(startDateTime_, 0L) };
    inline CreateReminderRequestPayloadRecurrenceRule& setStartDateTime(int64_t startDateTime) { DARABONBA_PTR_SET_VALUE(startDateTime_, startDateTime) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline CreateReminderRequestPayloadRecurrenceRule& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    std::shared_ptr<int32_t> day_ = nullptr;
    std::shared_ptr<vector<int32_t>> daysOfMonth_ = nullptr;
    std::shared_ptr<vector<int32_t>> daysOfWeek_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endDateTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> freq_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> hour_ = nullptr;
    std::shared_ptr<int32_t> minute_ = nullptr;
    std::shared_ptr<int32_t> month_ = nullptr;
    std::shared_ptr<int32_t> second_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startDateTime_ = nullptr;
    std::shared_ptr<int32_t> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
