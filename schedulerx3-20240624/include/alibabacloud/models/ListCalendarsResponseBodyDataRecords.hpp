// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListCalendarsResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    ListCalendarsResponseBodyDataRecords() = default ;
    ListCalendarsResponseBodyDataRecords(const ListCalendarsResponseBodyDataRecords &) = default ;
    ListCalendarsResponseBodyDataRecords(ListCalendarsResponseBodyDataRecords &&) = default ;
    ListCalendarsResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsResponseBodyDataRecords() = default ;
    ListCalendarsResponseBodyDataRecords& operator=(const ListCalendarsResponseBodyDataRecords &) = default ;
    ListCalendarsResponseBodyDataRecords& operator=(ListCalendarsResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && return this->months_ == nullptr && return this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string calendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline ListCalendarsResponseBodyDataRecords& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline string months() const { DARABONBA_PTR_GET_DEFAULT(months_, "") };
    inline ListCalendarsResponseBodyDataRecords& setMonths(string months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline ListCalendarsResponseBodyDataRecords& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    std::shared_ptr<string> calendarName_ = nullptr;
    std::shared_ptr<string> months_ = nullptr;
    std::shared_ptr<int32_t> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
