// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGESCHEDULERXCALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGESCHEDULERXCALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ManageSchedulerxCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(Incremental, incremental_);
      DARABONBA_PTR_TO_JSON(MonthDaysContent, monthDaysContent_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, ManageSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(Incremental, incremental_);
      DARABONBA_PTR_FROM_JSON(MonthDaysContent, monthDaysContent_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    ManageSchedulerxCalendarRequest() = default ;
    ManageSchedulerxCalendarRequest(const ManageSchedulerxCalendarRequest &) = default ;
    ManageSchedulerxCalendarRequest(ManageSchedulerxCalendarRequest &&) = default ;
    ManageSchedulerxCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageSchedulerxCalendarRequest() = default ;
    ManageSchedulerxCalendarRequest& operator=(const ManageSchedulerxCalendarRequest &) = default ;
    ManageSchedulerxCalendarRequest& operator=(ManageSchedulerxCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && return this->incremental_ == nullptr && return this->monthDaysContent_ == nullptr && return this->regionId_ == nullptr && return this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string calendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline ManageSchedulerxCalendarRequest& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // incremental Field Functions 
    bool hasIncremental() const { return this->incremental_ != nullptr;};
    void deleteIncremental() { this->incremental_ = nullptr;};
    inline bool incremental() const { DARABONBA_PTR_GET_DEFAULT(incremental_, false) };
    inline ManageSchedulerxCalendarRequest& setIncremental(bool incremental) { DARABONBA_PTR_SET_VALUE(incremental_, incremental) };


    // monthDaysContent Field Functions 
    bool hasMonthDaysContent() const { return this->monthDaysContent_ != nullptr;};
    void deleteMonthDaysContent() { this->monthDaysContent_ = nullptr;};
    inline string monthDaysContent() const { DARABONBA_PTR_GET_DEFAULT(monthDaysContent_, "") };
    inline ManageSchedulerxCalendarRequest& setMonthDaysContent(string monthDaysContent) { DARABONBA_PTR_SET_VALUE(monthDaysContent_, monthDaysContent) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ManageSchedulerxCalendarRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline ManageSchedulerxCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The calendar name.
    // 
    // This parameter is required.
    std::shared_ptr<string> calendarName_ = nullptr;
    // Specifies whether to perform an incremental update. Default value: false.
    // 
    // *   false: Updates the specified months and removes configurations for all other months.
    // *   true: Updates only the specified months and preserves existing configurations for other months.
    std::shared_ptr<bool> incremental_ = nullptr;
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
