// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSCUSTOMSCHEDULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSCUSTOMSCHEDULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& obj) { 
      DARABONBA_PTR_TO_JSON(days, days_);
      DARABONBA_PTR_TO_JSON(end_hour, endHour_);
      DARABONBA_PTR_TO_JSON(start_hour, startHour_);
      DARABONBA_PTR_TO_JSON(time_zone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& obj) { 
      DARABONBA_PTR_FROM_JSON(days, days_);
      DARABONBA_PTR_FROM_JSON(end_hour, endHour_);
      DARABONBA_PTR_FROM_JSON(start_hour, startHour_);
      DARABONBA_PTR_FROM_JSON(time_zone, timeZone_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule(DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->days_ != nullptr
        && this->endHour_ != nullptr && this->startHour_ != nullptr && this->timeZone_ != nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays & days() const { DARABONBA_PTR_GET_CONST(days_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays days() { DARABONBA_PTR_GET(days_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& setDays(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& setDays(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int32_t endHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int32_t startHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The days in a week.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays> days_ = nullptr;
    // The end time of the detection. Unit: hours.
    std::shared_ptr<int32_t> endHour_ = nullptr;
    // The start time of the detection. Unit: hours.
    std::shared_ptr<int32_t> startHour_ = nullptr;
    // The time zone of the detection.
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
