// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEDULERXCALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEDULERXCALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class DeleteSchedulerxCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    DeleteSchedulerxCalendarRequest() = default ;
    DeleteSchedulerxCalendarRequest(const DeleteSchedulerxCalendarRequest &) = default ;
    DeleteSchedulerxCalendarRequest(DeleteSchedulerxCalendarRequest &&) = default ;
    DeleteSchedulerxCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSchedulerxCalendarRequest() = default ;
    DeleteSchedulerxCalendarRequest& operator=(const DeleteSchedulerxCalendarRequest &) = default ;
    DeleteSchedulerxCalendarRequest& operator=(DeleteSchedulerxCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && return this->regionId_ == nullptr && return this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string calendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline DeleteSchedulerxCalendarRequest& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSchedulerxCalendarRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline DeleteSchedulerxCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The calendar name.
    // 
    // This parameter is required.
    std::shared_ptr<string> calendarName_ = nullptr;
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
