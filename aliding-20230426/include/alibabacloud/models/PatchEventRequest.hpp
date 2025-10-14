// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PatchEventRequestAttendees.hpp>
#include <alibabacloud/models/PatchEventRequestCardInstances.hpp>
#include <alibabacloud/models/PatchEventRequestEnd.hpp>
#include <map>
#include <alibabacloud/models/PatchEventRequestLocation.hpp>
#include <alibabacloud/models/PatchEventRequestRecurrence.hpp>
#include <alibabacloud/models/PatchEventRequestReminders.hpp>
#include <alibabacloud/models/PatchEventRequestStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attendees, attendees_);
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(CardInstances, cardInstances_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(Reminders, reminders_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(CardInstances, cardInstances_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(Reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    PatchEventRequest() = default ;
    PatchEventRequest(const PatchEventRequest &) = default ;
    PatchEventRequest(PatchEventRequest &&) = default ;
    PatchEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventRequest() = default ;
    PatchEventRequest& operator=(const PatchEventRequest &) = default ;
    PatchEventRequest& operator=(PatchEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendees_ == nullptr
        && return this->calendarId_ == nullptr && return this->cardInstances_ == nullptr && return this->description_ == nullptr && return this->end_ == nullptr && return this->eventId_ == nullptr
        && return this->extra_ == nullptr && return this->isAllDay_ == nullptr && return this->location_ == nullptr && return this->recurrence_ == nullptr && return this->reminders_ == nullptr
        && return this->start_ == nullptr && return this->summary_ == nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<PatchEventRequestAttendees> & attendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<PatchEventRequestAttendees>) };
    inline vector<PatchEventRequestAttendees> attendees() { DARABONBA_PTR_GET(attendees_, vector<PatchEventRequestAttendees>) };
    inline PatchEventRequest& setAttendees(const vector<PatchEventRequestAttendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline PatchEventRequest& setAttendees(vector<PatchEventRequestAttendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline PatchEventRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // cardInstances Field Functions 
    bool hasCardInstances() const { return this->cardInstances_ != nullptr;};
    void deleteCardInstances() { this->cardInstances_ = nullptr;};
    inline const vector<PatchEventRequestCardInstances> & cardInstances() const { DARABONBA_PTR_GET_CONST(cardInstances_, vector<PatchEventRequestCardInstances>) };
    inline vector<PatchEventRequestCardInstances> cardInstances() { DARABONBA_PTR_GET(cardInstances_, vector<PatchEventRequestCardInstances>) };
    inline PatchEventRequest& setCardInstances(const vector<PatchEventRequestCardInstances> & cardInstances) { DARABONBA_PTR_SET_VALUE(cardInstances_, cardInstances) };
    inline PatchEventRequest& setCardInstances(vector<PatchEventRequestCardInstances> && cardInstances) { DARABONBA_PTR_SET_RVALUE(cardInstances_, cardInstances) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PatchEventRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const PatchEventRequestEnd & end() const { DARABONBA_PTR_GET_CONST(end_, PatchEventRequestEnd) };
    inline PatchEventRequestEnd end() { DARABONBA_PTR_GET(end_, PatchEventRequestEnd) };
    inline PatchEventRequest& setEnd(const PatchEventRequestEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline PatchEventRequest& setEnd(PatchEventRequestEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline PatchEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & extra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> extra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline PatchEventRequest& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline PatchEventRequest& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline PatchEventRequest& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const PatchEventRequestLocation & location() const { DARABONBA_PTR_GET_CONST(location_, PatchEventRequestLocation) };
    inline PatchEventRequestLocation location() { DARABONBA_PTR_GET(location_, PatchEventRequestLocation) };
    inline PatchEventRequest& setLocation(const PatchEventRequestLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline PatchEventRequest& setLocation(PatchEventRequestLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const PatchEventRequestRecurrence & recurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, PatchEventRequestRecurrence) };
    inline PatchEventRequestRecurrence recurrence() { DARABONBA_PTR_GET(recurrence_, PatchEventRequestRecurrence) };
    inline PatchEventRequest& setRecurrence(const PatchEventRequestRecurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline PatchEventRequest& setRecurrence(PatchEventRequestRecurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<PatchEventRequestReminders> & reminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<PatchEventRequestReminders>) };
    inline vector<PatchEventRequestReminders> reminders() { DARABONBA_PTR_GET(reminders_, vector<PatchEventRequestReminders>) };
    inline PatchEventRequest& setReminders(const vector<PatchEventRequestReminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline PatchEventRequest& setReminders(vector<PatchEventRequestReminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const PatchEventRequestStart & start() const { DARABONBA_PTR_GET_CONST(start_, PatchEventRequestStart) };
    inline PatchEventRequestStart start() { DARABONBA_PTR_GET(start_, PatchEventRequestStart) };
    inline PatchEventRequest& setStart(const PatchEventRequestStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline PatchEventRequest& setStart(PatchEventRequestStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline PatchEventRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<vector<PatchEventRequestAttendees>> attendees_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    std::shared_ptr<vector<PatchEventRequestCardInstances>> cardInstances_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<PatchEventRequestEnd> end_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<map<string, string>> extra_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<PatchEventRequestLocation> location_ = nullptr;
    std::shared_ptr<PatchEventRequestRecurrence> recurrence_ = nullptr;
    std::shared_ptr<vector<PatchEventRequestReminders>> reminders_ = nullptr;
    std::shared_ptr<PatchEventRequestStart> start_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
