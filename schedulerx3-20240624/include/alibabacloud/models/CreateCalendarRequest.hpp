// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    CreateCalendarRequest() = default ;
    CreateCalendarRequest(const CreateCalendarRequest &) = default ;
    CreateCalendarRequest(CreateCalendarRequest &&) = default ;
    CreateCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCalendarRequest() = default ;
    CreateCalendarRequest& operator=(const CreateCalendarRequest &) = default ;
    CreateCalendarRequest& operator=(CreateCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && this->clientToken_ == nullptr && this->clusterId_ == nullptr && this->months_ == nullptr && this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string getCalendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline CreateCalendarRequest& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCalendarRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateCalendarRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline string getMonths() const { DARABONBA_PTR_GET_DEFAULT(months_, "") };
    inline CreateCalendarRequest& setMonths(string months) { DARABONBA_PTR_SET_VALUE(months_, months) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline CreateCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // This parameter is required.
    shared_ptr<string> calendarName_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> months_ {};
    // This parameter is required.
    shared_ptr<int32_t> year_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
