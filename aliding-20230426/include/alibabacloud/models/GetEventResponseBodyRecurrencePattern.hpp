// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYRECURRENCEPATTERN_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYRECURRENCEPATTERN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventResponseBodyRecurrencePattern : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventResponseBodyRecurrencePattern& obj) { 
      DARABONBA_PTR_TO_JSON(DayOfMonth, dayOfMonth_);
      DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventResponseBodyRecurrencePattern& obj) { 
      DARABONBA_PTR_FROM_JSON(DayOfMonth, dayOfMonth_);
      DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetEventResponseBodyRecurrencePattern() = default ;
    GetEventResponseBodyRecurrencePattern(const GetEventResponseBodyRecurrencePattern &) = default ;
    GetEventResponseBodyRecurrencePattern(GetEventResponseBodyRecurrencePattern &&) = default ;
    GetEventResponseBodyRecurrencePattern(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventResponseBodyRecurrencePattern() = default ;
    GetEventResponseBodyRecurrencePattern& operator=(const GetEventResponseBodyRecurrencePattern &) = default ;
    GetEventResponseBodyRecurrencePattern& operator=(GetEventResponseBodyRecurrencePattern &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dayOfMonth_ != nullptr
        && this->daysOfWeek_ != nullptr && this->index_ != nullptr && this->interval_ != nullptr && this->type_ != nullptr; };
    // dayOfMonth Field Functions 
    bool hasDayOfMonth() const { return this->dayOfMonth_ != nullptr;};
    void deleteDayOfMonth() { this->dayOfMonth_ = nullptr;};
    inline int32_t dayOfMonth() const { DARABONBA_PTR_GET_DEFAULT(dayOfMonth_, 0) };
    inline GetEventResponseBodyRecurrencePattern& setDayOfMonth(int32_t dayOfMonth) { DARABONBA_PTR_SET_VALUE(dayOfMonth_, dayOfMonth) };


    // daysOfWeek Field Functions 
    bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
    void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
    inline string daysOfWeek() const { DARABONBA_PTR_GET_DEFAULT(daysOfWeek_, "") };
    inline GetEventResponseBodyRecurrencePattern& setDaysOfWeek(string daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline GetEventResponseBodyRecurrencePattern& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetEventResponseBodyRecurrencePattern& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetEventResponseBodyRecurrencePattern& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
