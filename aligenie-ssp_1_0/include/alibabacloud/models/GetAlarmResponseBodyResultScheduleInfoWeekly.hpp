// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMRESPONSEBODYRESULTSCHEDULEINFOWEEKLY_HPP_
#define ALIBABACLOUD_MODELS_GETALARMRESPONSEBODYRESULTSCHEDULEINFOWEEKLY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlarmResponseBodyResultScheduleInfoWeekly : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmResponseBodyResultScheduleInfoWeekly& obj) { 
      DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_TO_JSON(Hour, hour_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmResponseBodyResultScheduleInfoWeekly& obj) { 
      DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
      DARABONBA_PTR_FROM_JSON(Hour, hour_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
    };
    GetAlarmResponseBodyResultScheduleInfoWeekly() = default ;
    GetAlarmResponseBodyResultScheduleInfoWeekly(const GetAlarmResponseBodyResultScheduleInfoWeekly &) = default ;
    GetAlarmResponseBodyResultScheduleInfoWeekly(GetAlarmResponseBodyResultScheduleInfoWeekly &&) = default ;
    GetAlarmResponseBodyResultScheduleInfoWeekly(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmResponseBodyResultScheduleInfoWeekly() = default ;
    GetAlarmResponseBodyResultScheduleInfoWeekly& operator=(const GetAlarmResponseBodyResultScheduleInfoWeekly &) = default ;
    GetAlarmResponseBodyResultScheduleInfoWeekly& operator=(GetAlarmResponseBodyResultScheduleInfoWeekly &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->daysOfWeek_ != nullptr
        && this->hour_ != nullptr && this->minute_ != nullptr; };
    // daysOfWeek Field Functions 
    bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
    void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
    inline const vector<int32_t> & daysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
    inline vector<int32_t> daysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
    inline GetAlarmResponseBodyResultScheduleInfoWeekly& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
    inline GetAlarmResponseBodyResultScheduleInfoWeekly& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


    // hour Field Functions 
    bool hasHour() const { return this->hour_ != nullptr;};
    void deleteHour() { this->hour_ = nullptr;};
    inline int32_t hour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
    inline GetAlarmResponseBodyResultScheduleInfoWeekly& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline int32_t minute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
    inline GetAlarmResponseBodyResultScheduleInfoWeekly& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


  protected:
    std::shared_ptr<vector<int32_t>> daysOfWeek_ = nullptr;
    std::shared_ptr<int32_t> hour_ = nullptr;
    std::shared_ptr<int32_t> minute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
