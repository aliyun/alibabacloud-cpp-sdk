// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEventRequestAttendees.hpp>
#include <alibabacloud/models/CreateEventRequestCardInstances.hpp>
#include <alibabacloud/models/CreateEventRequestEnd.hpp>
#include <map>
#include <alibabacloud/models/CreateEventRequestLocation.hpp>
#include <alibabacloud/models/CreateEventRequestOnlineMeetingInfo.hpp>
#include <alibabacloud/models/CreateEventRequestRecurrence.hpp>
#include <alibabacloud/models/CreateEventRequestReminders.hpp>
#include <alibabacloud/models/CreateEventRequestRichTextDescription.hpp>
#include <alibabacloud/models/CreateEventRequestUiConfigs.hpp>
#include <alibabacloud/models/CreateEventRequestStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attendees, attendees_);
      DARABONBA_PTR_TO_JSON(CardInstances, cardInstances_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(Reminders, reminders_);
      DARABONBA_PTR_TO_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(UiConfigs, uiConfigs_);
      DARABONBA_PTR_TO_JSON(calendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(CardInstances, cardInstances_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(Reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(UiConfigs, uiConfigs_);
      DARABONBA_PTR_FROM_JSON(calendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    CreateEventRequest() = default ;
    CreateEventRequest(const CreateEventRequest &) = default ;
    CreateEventRequest(CreateEventRequest &&) = default ;
    CreateEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequest() = default ;
    CreateEventRequest& operator=(const CreateEventRequest &) = default ;
    CreateEventRequest& operator=(CreateEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attendees_ != nullptr
        && this->cardInstances_ != nullptr && this->description_ != nullptr && this->end_ != nullptr && this->extra_ != nullptr && this->isAllDay_ != nullptr
        && this->location_ != nullptr && this->onlineMeetingInfo_ != nullptr && this->recurrence_ != nullptr && this->reminders_ != nullptr && this->richTextDescription_ != nullptr
        && this->summary_ != nullptr && this->uiConfigs_ != nullptr && this->calendarId_ != nullptr && this->start_ != nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<CreateEventRequestAttendees> & attendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<CreateEventRequestAttendees>) };
    inline vector<CreateEventRequestAttendees> attendees() { DARABONBA_PTR_GET(attendees_, vector<CreateEventRequestAttendees>) };
    inline CreateEventRequest& setAttendees(const vector<CreateEventRequestAttendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline CreateEventRequest& setAttendees(vector<CreateEventRequestAttendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // cardInstances Field Functions 
    bool hasCardInstances() const { return this->cardInstances_ != nullptr;};
    void deleteCardInstances() { this->cardInstances_ = nullptr;};
    inline const vector<CreateEventRequestCardInstances> & cardInstances() const { DARABONBA_PTR_GET_CONST(cardInstances_, vector<CreateEventRequestCardInstances>) };
    inline vector<CreateEventRequestCardInstances> cardInstances() { DARABONBA_PTR_GET(cardInstances_, vector<CreateEventRequestCardInstances>) };
    inline CreateEventRequest& setCardInstances(const vector<CreateEventRequestCardInstances> & cardInstances) { DARABONBA_PTR_SET_VALUE(cardInstances_, cardInstances) };
    inline CreateEventRequest& setCardInstances(vector<CreateEventRequestCardInstances> && cardInstances) { DARABONBA_PTR_SET_RVALUE(cardInstances_, cardInstances) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const CreateEventRequestEnd & end() const { DARABONBA_PTR_GET_CONST(end_, CreateEventRequestEnd) };
    inline CreateEventRequestEnd end() { DARABONBA_PTR_GET(end_, CreateEventRequestEnd) };
    inline CreateEventRequest& setEnd(const CreateEventRequestEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline CreateEventRequest& setEnd(CreateEventRequestEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & extra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> extra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline CreateEventRequest& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline CreateEventRequest& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline CreateEventRequest& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const CreateEventRequestLocation & location() const { DARABONBA_PTR_GET_CONST(location_, CreateEventRequestLocation) };
    inline CreateEventRequestLocation location() { DARABONBA_PTR_GET(location_, CreateEventRequestLocation) };
    inline CreateEventRequest& setLocation(const CreateEventRequestLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline CreateEventRequest& setLocation(CreateEventRequestLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // onlineMeetingInfo Field Functions 
    bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
    void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
    inline const CreateEventRequestOnlineMeetingInfo & onlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, CreateEventRequestOnlineMeetingInfo) };
    inline CreateEventRequestOnlineMeetingInfo onlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, CreateEventRequestOnlineMeetingInfo) };
    inline CreateEventRequest& setOnlineMeetingInfo(const CreateEventRequestOnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
    inline CreateEventRequest& setOnlineMeetingInfo(CreateEventRequestOnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const CreateEventRequestRecurrence & recurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, CreateEventRequestRecurrence) };
    inline CreateEventRequestRecurrence recurrence() { DARABONBA_PTR_GET(recurrence_, CreateEventRequestRecurrence) };
    inline CreateEventRequest& setRecurrence(const CreateEventRequestRecurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline CreateEventRequest& setRecurrence(CreateEventRequestRecurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<CreateEventRequestReminders> & reminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<CreateEventRequestReminders>) };
    inline vector<CreateEventRequestReminders> reminders() { DARABONBA_PTR_GET(reminders_, vector<CreateEventRequestReminders>) };
    inline CreateEventRequest& setReminders(const vector<CreateEventRequestReminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline CreateEventRequest& setReminders(vector<CreateEventRequestReminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // richTextDescription Field Functions 
    bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
    void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
    inline const CreateEventRequestRichTextDescription & richTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, CreateEventRequestRichTextDescription) };
    inline CreateEventRequestRichTextDescription richTextDescription() { DARABONBA_PTR_GET(richTextDescription_, CreateEventRequestRichTextDescription) };
    inline CreateEventRequest& setRichTextDescription(const CreateEventRequestRichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
    inline CreateEventRequest& setRichTextDescription(CreateEventRequestRichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateEventRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // uiConfigs Field Functions 
    bool hasUiConfigs() const { return this->uiConfigs_ != nullptr;};
    void deleteUiConfigs() { this->uiConfigs_ = nullptr;};
    inline const vector<CreateEventRequestUiConfigs> & uiConfigs() const { DARABONBA_PTR_GET_CONST(uiConfigs_, vector<CreateEventRequestUiConfigs>) };
    inline vector<CreateEventRequestUiConfigs> uiConfigs() { DARABONBA_PTR_GET(uiConfigs_, vector<CreateEventRequestUiConfigs>) };
    inline CreateEventRequest& setUiConfigs(const vector<CreateEventRequestUiConfigs> & uiConfigs) { DARABONBA_PTR_SET_VALUE(uiConfigs_, uiConfigs) };
    inline CreateEventRequest& setUiConfigs(vector<CreateEventRequestUiConfigs> && uiConfigs) { DARABONBA_PTR_SET_RVALUE(uiConfigs_, uiConfigs) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline CreateEventRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const CreateEventRequestStart & start() const { DARABONBA_PTR_GET_CONST(start_, CreateEventRequestStart) };
    inline CreateEventRequestStart start() { DARABONBA_PTR_GET(start_, CreateEventRequestStart) };
    inline CreateEventRequest& setStart(const CreateEventRequestStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline CreateEventRequest& setStart(CreateEventRequestStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


  protected:
    std::shared_ptr<vector<CreateEventRequestAttendees>> attendees_ = nullptr;
    std::shared_ptr<vector<CreateEventRequestCardInstances>> cardInstances_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateEventRequestEnd> end_ = nullptr;
    std::shared_ptr<map<string, string>> extra_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<CreateEventRequestLocation> location_ = nullptr;
    std::shared_ptr<CreateEventRequestOnlineMeetingInfo> onlineMeetingInfo_ = nullptr;
    std::shared_ptr<CreateEventRequestRecurrence> recurrence_ = nullptr;
    std::shared_ptr<vector<CreateEventRequestReminders>> reminders_ = nullptr;
    std::shared_ptr<CreateEventRequestRichTextDescription> richTextDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<vector<CreateEventRequestUiConfigs>> uiConfigs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateEventRequestStart> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
