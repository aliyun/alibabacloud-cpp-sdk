// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class DeleteCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    DeleteCalendarRequest() = default ;
    DeleteCalendarRequest(const DeleteCalendarRequest &) = default ;
    DeleteCalendarRequest(DeleteCalendarRequest &&) = default ;
    DeleteCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCalendarRequest() = default ;
    DeleteCalendarRequest& operator=(const DeleteCalendarRequest &) = default ;
    DeleteCalendarRequest& operator=(DeleteCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && this->clusterId_ == nullptr && this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string getCalendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline DeleteCalendarRequest& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteCalendarRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline DeleteCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // This parameter is required.
    shared_ptr<string> calendarName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<int32_t> year_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
