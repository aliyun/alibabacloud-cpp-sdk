// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULERXCALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULERXCALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class CreateSchedulerxCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(MonthDaysContent, monthDaysContent_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(MonthDaysContent, monthDaysContent_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    CreateSchedulerxCalendarRequest() = default ;
    CreateSchedulerxCalendarRequest(const CreateSchedulerxCalendarRequest &) = default ;
    CreateSchedulerxCalendarRequest(CreateSchedulerxCalendarRequest &&) = default ;
    CreateSchedulerxCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSchedulerxCalendarRequest() = default ;
    CreateSchedulerxCalendarRequest& operator=(const CreateSchedulerxCalendarRequest &) = default ;
    CreateSchedulerxCalendarRequest& operator=(CreateSchedulerxCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && return this->monthDaysContent_ == nullptr && return this->regionId_ == nullptr && return this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string calendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline CreateSchedulerxCalendarRequest& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // monthDaysContent Field Functions 
    bool hasMonthDaysContent() const { return this->monthDaysContent_ != nullptr;};
    void deleteMonthDaysContent() { this->monthDaysContent_ = nullptr;};
    inline string monthDaysContent() const { DARABONBA_PTR_GET_DEFAULT(monthDaysContent_, "") };
    inline CreateSchedulerxCalendarRequest& setMonthDaysContent(string monthDaysContent) { DARABONBA_PTR_SET_VALUE(monthDaysContent_, monthDaysContent) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSchedulerxCalendarRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline CreateSchedulerxCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The calendar name.
    // 
    // This parameter is required.
    std::shared_ptr<string> calendarName_ = nullptr;
    // The month and days.
    // 
    // This parameter is required.
    std::shared_ptr<string> monthDaysContent_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The year.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
