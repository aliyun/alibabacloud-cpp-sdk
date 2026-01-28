// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Incremental, incremental_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Incremental, incremental_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    UpdateCalendarRequest() = default ;
    UpdateCalendarRequest(const UpdateCalendarRequest &) = default ;
    UpdateCalendarRequest(UpdateCalendarRequest &&) = default ;
    UpdateCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCalendarRequest() = default ;
    UpdateCalendarRequest& operator=(const UpdateCalendarRequest &) = default ;
    UpdateCalendarRequest& operator=(UpdateCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && this->clientToken_ == nullptr && this->clusterId_ == nullptr && this->incremental_ == nullptr && this->months_ == nullptr && this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string getCalendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline UpdateCalendarRequest& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCalendarRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateCalendarRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // incremental Field Functions 
    bool hasIncremental() const { return this->incremental_ != nullptr;};
    void deleteIncremental() { this->incremental_ = nullptr;};
    inline bool getIncremental() const { DARABONBA_PTR_GET_DEFAULT(incremental_, false) };
    inline UpdateCalendarRequest& setIncremental(bool incremental) { DARABONBA_PTR_SET_VALUE(incremental_, incremental) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline string getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, "") };
    inline UpdateCalendarRequest& setMonths(string months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline UpdateCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // This parameter is required.
    shared_ptr<string> calendarName_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<bool> incremental_ {};
    // This parameter is required.
    shared_ptr<string> months_ {};
    // This parameter is required.
    shared_ptr<int32_t> year_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
