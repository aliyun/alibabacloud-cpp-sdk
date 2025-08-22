// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATASCHEDULELAYERSRESTRICTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATASCHEDULELAYERSRESTRICTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimeOfDay, endTimeOfDay_);
      DARABONBA_PTR_TO_JSON(RestrictionType, restrictionType_);
      DARABONBA_PTR_TO_JSON(StartTimeOfDay, startTimeOfDay_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimeOfDay, endTimeOfDay_);
      DARABONBA_PTR_FROM_JSON(RestrictionType, restrictionType_);
      DARABONBA_PTR_FROM_JSON(StartTimeOfDay, startTimeOfDay_);
    };
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions() = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions(const GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions(GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions &&) = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions() = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions& operator=(const GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions& operator=(GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTimeOfDay_ != nullptr
        && this->restrictionType_ != nullptr && this->startTimeOfDay_ != nullptr; };
    // endTimeOfDay Field Functions 
    bool hasEndTimeOfDay() const { return this->endTimeOfDay_ != nullptr;};
    void deleteEndTimeOfDay() { this->endTimeOfDay_ = nullptr;};
    inline string endTimeOfDay() const { DARABONBA_PTR_GET_DEFAULT(endTimeOfDay_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions& setEndTimeOfDay(string endTimeOfDay) { DARABONBA_PTR_SET_VALUE(endTimeOfDay_, endTimeOfDay) };


    // restrictionType Field Functions 
    bool hasRestrictionType() const { return this->restrictionType_ != nullptr;};
    void deleteRestrictionType() { this->restrictionType_ = nullptr;};
    inline string restrictionType() const { DARABONBA_PTR_GET_DEFAULT(restrictionType_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions& setRestrictionType(string restrictionType) { DARABONBA_PTR_SET_VALUE(restrictionType_, restrictionType) };


    // startTimeOfDay Field Functions 
    bool hasStartTimeOfDay() const { return this->startTimeOfDay_ != nullptr;};
    void deleteStartTimeOfDay() { this->startTimeOfDay_ = nullptr;};
    inline string startTimeOfDay() const { DARABONBA_PTR_GET_DEFAULT(startTimeOfDay_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataScheduleLayersRestrictions& setStartTimeOfDay(string startTimeOfDay) { DARABONBA_PTR_SET_VALUE(startTimeOfDay_, startTimeOfDay) };


  protected:
    // The end time of the shift per day.
    std::shared_ptr<string> endTimeOfDay_ = nullptr;
    // The type of the limit. Valid values:
    // 
    // *   daily_restriction
    // *   weekly_restriction
    std::shared_ptr<string> restrictionType_ = nullptr;
    // The start time of the shift per day.
    std::shared_ptr<string> startTimeOfDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
