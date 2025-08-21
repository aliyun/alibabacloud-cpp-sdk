// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMRESPONSEBODYRESULTSCHEDULEINFOSTATUTORYWORKINGDAY_HPP_
#define ALIBABACLOUD_MODELS_GETALARMRESPONSEBODYRESULTSCHEDULEINFOSTATUTORYWORKINGDAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay& obj) { 
      DARABONBA_PTR_TO_JSON(Hour, hour_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay& obj) { 
      DARABONBA_PTR_FROM_JSON(Hour, hour_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
    };
    GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay() = default ;
    GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay(const GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay &) = default ;
    GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay(GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay &&) = default ;
    GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay() = default ;
    GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay& operator=(const GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay &) = default ;
    GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay& operator=(GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hour_ != nullptr
        && this->minute_ != nullptr; };
    // hour Field Functions 
    bool hasHour() const { return this->hour_ != nullptr;};
    void deleteHour() { this->hour_ = nullptr;};
    inline int32_t hour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
    inline GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline int32_t minute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
    inline GetAlarmResponseBodyResultScheduleInfoStatutoryWorkingDay& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


  protected:
    std::shared_ptr<int32_t> hour_ = nullptr;
    std::shared_ptr<int32_t> minute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
