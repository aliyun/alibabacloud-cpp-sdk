// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSRECURRENCEPATTERN_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSRECURRENCEPATTERN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsRecurrencePattern : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsRecurrencePattern& obj) { 
      DARABONBA_PTR_TO_JSON(DayOfMonth, dayOfMonth_);
      DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsRecurrencePattern& obj) { 
      DARABONBA_PTR_FROM_JSON(DayOfMonth, dayOfMonth_);
      DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListEventsResponseBodyEventsRecurrencePattern() = default ;
    ListEventsResponseBodyEventsRecurrencePattern(const ListEventsResponseBodyEventsRecurrencePattern &) = default ;
    ListEventsResponseBodyEventsRecurrencePattern(ListEventsResponseBodyEventsRecurrencePattern &&) = default ;
    ListEventsResponseBodyEventsRecurrencePattern(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsRecurrencePattern() = default ;
    ListEventsResponseBodyEventsRecurrencePattern& operator=(const ListEventsResponseBodyEventsRecurrencePattern &) = default ;
    ListEventsResponseBodyEventsRecurrencePattern& operator=(ListEventsResponseBodyEventsRecurrencePattern &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dayOfMonth_ == nullptr
        && return this->daysOfWeek_ == nullptr && return this->index_ == nullptr && return this->interval_ == nullptr && return this->type_ == nullptr; };
    // dayOfMonth Field Functions 
    bool hasDayOfMonth() const { return this->dayOfMonth_ != nullptr;};
    void deleteDayOfMonth() { this->dayOfMonth_ = nullptr;};
    inline int32_t dayOfMonth() const { DARABONBA_PTR_GET_DEFAULT(dayOfMonth_, 0) };
    inline ListEventsResponseBodyEventsRecurrencePattern& setDayOfMonth(int32_t dayOfMonth) { DARABONBA_PTR_SET_VALUE(dayOfMonth_, dayOfMonth) };


    // daysOfWeek Field Functions 
    bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
    void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
    inline string daysOfWeek() const { DARABONBA_PTR_GET_DEFAULT(daysOfWeek_, "") };
    inline ListEventsResponseBodyEventsRecurrencePattern& setDaysOfWeek(string daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline ListEventsResponseBodyEventsRecurrencePattern& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ListEventsResponseBodyEventsRecurrencePattern& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEventsResponseBodyEventsRecurrencePattern& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> dayOfMonth_ = nullptr;
    std::shared_ptr<string> daysOfWeek_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
