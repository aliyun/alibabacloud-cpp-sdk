// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXCALENDARRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXCALENDARRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxCalendarResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxCalendarResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(MonthDaysContent, monthDaysContent_);
      DARABONBA_PTR_TO_JSON(SystemCalendar, systemCalendar_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxCalendarResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(MonthDaysContent, monthDaysContent_);
      DARABONBA_PTR_FROM_JSON(SystemCalendar, systemCalendar_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    ReadSchedulerxCalendarResponseBodyDataRecords() = default ;
    ReadSchedulerxCalendarResponseBodyDataRecords(const ReadSchedulerxCalendarResponseBodyDataRecords &) = default ;
    ReadSchedulerxCalendarResponseBodyDataRecords(ReadSchedulerxCalendarResponseBodyDataRecords &&) = default ;
    ReadSchedulerxCalendarResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxCalendarResponseBodyDataRecords() = default ;
    ReadSchedulerxCalendarResponseBodyDataRecords& operator=(const ReadSchedulerxCalendarResponseBodyDataRecords &) = default ;
    ReadSchedulerxCalendarResponseBodyDataRecords& operator=(ReadSchedulerxCalendarResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && return this->creator_ == nullptr && return this->monthDaysContent_ == nullptr && return this->systemCalendar_ == nullptr && return this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string calendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline ReadSchedulerxCalendarResponseBodyDataRecords& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ReadSchedulerxCalendarResponseBodyDataRecords& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // monthDaysContent Field Functions 
    bool hasMonthDaysContent() const { return this->monthDaysContent_ != nullptr;};
    void deleteMonthDaysContent() { this->monthDaysContent_ = nullptr;};
    inline string monthDaysContent() const { DARABONBA_PTR_GET_DEFAULT(monthDaysContent_, "") };
    inline ReadSchedulerxCalendarResponseBodyDataRecords& setMonthDaysContent(string monthDaysContent) { DARABONBA_PTR_SET_VALUE(monthDaysContent_, monthDaysContent) };


    // systemCalendar Field Functions 
    bool hasSystemCalendar() const { return this->systemCalendar_ != nullptr;};
    void deleteSystemCalendar() { this->systemCalendar_ = nullptr;};
    inline bool systemCalendar() const { DARABONBA_PTR_GET_DEFAULT(systemCalendar_, false) };
    inline ReadSchedulerxCalendarResponseBodyDataRecords& setSystemCalendar(bool systemCalendar) { DARABONBA_PTR_SET_VALUE(systemCalendar_, systemCalendar) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline ReadSchedulerxCalendarResponseBodyDataRecords& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The calendar name.
    std::shared_ptr<string> calendarName_ = nullptr;
    // The creator.
    std::shared_ptr<string> creator_ = nullptr;
    // The months and days.
    std::shared_ptr<string> monthDaysContent_ = nullptr;
    // Indicates whether it is a system calendar.
    std::shared_ptr<bool> systemCalendar_ = nullptr;
    // The year.
    std::shared_ptr<int32_t> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
