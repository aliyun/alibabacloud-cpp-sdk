// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(MaxAttendees, maxAttendees_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(MaxAttendees, maxAttendees_);
    };
    GetEventRequest() = default ;
    GetEventRequest(const GetEventRequest &) = default ;
    GetEventRequest(GetEventRequest &&) = default ;
    GetEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventRequest() = default ;
    GetEventRequest& operator=(const GetEventRequest &) = default ;
    GetEventRequest& operator=(GetEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calendarId_ != nullptr
        && this->eventId_ != nullptr && this->maxAttendees_ != nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline GetEventRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // maxAttendees Field Functions 
    bool hasMaxAttendees() const { return this->maxAttendees_ != nullptr;};
    void deleteMaxAttendees() { this->maxAttendees_ = nullptr;};
    inline int64_t maxAttendees() const { DARABONBA_PTR_GET_DEFAULT(maxAttendees_, 0L) };
    inline GetEventRequest& setMaxAttendees(int64_t maxAttendees) { DARABONBA_PTR_SET_VALUE(maxAttendees_, maxAttendees) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<int64_t> maxAttendees_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
