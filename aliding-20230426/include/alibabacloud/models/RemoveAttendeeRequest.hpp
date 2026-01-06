// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEATTENDEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEATTENDEEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RemoveAttendeeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAttendeeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttendeesToRemove, attendeesToRemove_);
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAttendeeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttendeesToRemove, attendeesToRemove_);
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
    };
    RemoveAttendeeRequest() = default ;
    RemoveAttendeeRequest(const RemoveAttendeeRequest &) = default ;
    RemoveAttendeeRequest(RemoveAttendeeRequest &&) = default ;
    RemoveAttendeeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAttendeeRequest() = default ;
    RemoveAttendeeRequest& operator=(const RemoveAttendeeRequest &) = default ;
    RemoveAttendeeRequest& operator=(RemoveAttendeeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendeesToRemove_ == nullptr
        && this->calendarId_ == nullptr && this->eventId_ == nullptr; };
    // attendeesToRemove Field Functions 
    bool hasAttendeesToRemove() const { return this->attendeesToRemove_ != nullptr;};
    void deleteAttendeesToRemove() { this->attendeesToRemove_ = nullptr;};
    inline const vector<string> & getAttendeesToRemove() const { DARABONBA_PTR_GET_CONST(attendeesToRemove_, vector<string>) };
    inline vector<string> getAttendeesToRemove() { DARABONBA_PTR_GET(attendeesToRemove_, vector<string>) };
    inline RemoveAttendeeRequest& setAttendeesToRemove(const vector<string> & attendeesToRemove) { DARABONBA_PTR_SET_VALUE(attendeesToRemove_, attendeesToRemove) };
    inline RemoveAttendeeRequest& setAttendeesToRemove(vector<string> && attendeesToRemove) { DARABONBA_PTR_SET_RVALUE(attendeesToRemove_, attendeesToRemove) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline RemoveAttendeeRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RemoveAttendeeRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


  protected:
    shared_ptr<vector<string>> attendeesToRemove_ {};
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
    // This parameter is required.
    shared_ptr<string> eventId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
