// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attendees, attendeesShrink_);
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(CardInstances, cardInstancesShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(End, endShrink_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(Location, locationShrink_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrenceShrink_);
      DARABONBA_PTR_TO_JSON(Reminders, remindersShrink_);
      DARABONBA_PTR_TO_JSON(Start, startShrink_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attendees, attendeesShrink_);
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(CardInstances, cardInstancesShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(End, endShrink_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(Location, locationShrink_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrenceShrink_);
      DARABONBA_PTR_FROM_JSON(Reminders, remindersShrink_);
      DARABONBA_PTR_FROM_JSON(Start, startShrink_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    PatchEventShrinkRequest() = default ;
    PatchEventShrinkRequest(const PatchEventShrinkRequest &) = default ;
    PatchEventShrinkRequest(PatchEventShrinkRequest &&) = default ;
    PatchEventShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventShrinkRequest() = default ;
    PatchEventShrinkRequest& operator=(const PatchEventShrinkRequest &) = default ;
    PatchEventShrinkRequest& operator=(PatchEventShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attendeesShrink_ != nullptr
        && this->calendarId_ != nullptr && this->cardInstancesShrink_ != nullptr && this->description_ != nullptr && this->endShrink_ != nullptr && this->eventId_ != nullptr
        && this->extraShrink_ != nullptr && this->isAllDay_ != nullptr && this->locationShrink_ != nullptr && this->recurrenceShrink_ != nullptr && this->remindersShrink_ != nullptr
        && this->startShrink_ != nullptr && this->summary_ != nullptr; };
    // attendeesShrink Field Functions 
    bool hasAttendeesShrink() const { return this->attendeesShrink_ != nullptr;};
    void deleteAttendeesShrink() { this->attendeesShrink_ = nullptr;};
    inline string attendeesShrink() const { DARABONBA_PTR_GET_DEFAULT(attendeesShrink_, "") };
    inline PatchEventShrinkRequest& setAttendeesShrink(string attendeesShrink) { DARABONBA_PTR_SET_VALUE(attendeesShrink_, attendeesShrink) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline PatchEventShrinkRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // cardInstancesShrink Field Functions 
    bool hasCardInstancesShrink() const { return this->cardInstancesShrink_ != nullptr;};
    void deleteCardInstancesShrink() { this->cardInstancesShrink_ = nullptr;};
    inline string cardInstancesShrink() const { DARABONBA_PTR_GET_DEFAULT(cardInstancesShrink_, "") };
    inline PatchEventShrinkRequest& setCardInstancesShrink(string cardInstancesShrink) { DARABONBA_PTR_SET_VALUE(cardInstancesShrink_, cardInstancesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PatchEventShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endShrink Field Functions 
    bool hasEndShrink() const { return this->endShrink_ != nullptr;};
    void deleteEndShrink() { this->endShrink_ = nullptr;};
    inline string endShrink() const { DARABONBA_PTR_GET_DEFAULT(endShrink_, "") };
    inline PatchEventShrinkRequest& setEndShrink(string endShrink) { DARABONBA_PTR_SET_VALUE(endShrink_, endShrink) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline PatchEventShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string extraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline PatchEventShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline PatchEventShrinkRequest& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // locationShrink Field Functions 
    bool hasLocationShrink() const { return this->locationShrink_ != nullptr;};
    void deleteLocationShrink() { this->locationShrink_ = nullptr;};
    inline string locationShrink() const { DARABONBA_PTR_GET_DEFAULT(locationShrink_, "") };
    inline PatchEventShrinkRequest& setLocationShrink(string locationShrink) { DARABONBA_PTR_SET_VALUE(locationShrink_, locationShrink) };


    // recurrenceShrink Field Functions 
    bool hasRecurrenceShrink() const { return this->recurrenceShrink_ != nullptr;};
    void deleteRecurrenceShrink() { this->recurrenceShrink_ = nullptr;};
    inline string recurrenceShrink() const { DARABONBA_PTR_GET_DEFAULT(recurrenceShrink_, "") };
    inline PatchEventShrinkRequest& setRecurrenceShrink(string recurrenceShrink) { DARABONBA_PTR_SET_VALUE(recurrenceShrink_, recurrenceShrink) };


    // remindersShrink Field Functions 
    bool hasRemindersShrink() const { return this->remindersShrink_ != nullptr;};
    void deleteRemindersShrink() { this->remindersShrink_ = nullptr;};
    inline string remindersShrink() const { DARABONBA_PTR_GET_DEFAULT(remindersShrink_, "") };
    inline PatchEventShrinkRequest& setRemindersShrink(string remindersShrink) { DARABONBA_PTR_SET_VALUE(remindersShrink_, remindersShrink) };


    // startShrink Field Functions 
    bool hasStartShrink() const { return this->startShrink_ != nullptr;};
    void deleteStartShrink() { this->startShrink_ = nullptr;};
    inline string startShrink() const { DARABONBA_PTR_GET_DEFAULT(startShrink_, "") };
    inline PatchEventShrinkRequest& setStartShrink(string startShrink) { DARABONBA_PTR_SET_VALUE(startShrink_, startShrink) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline PatchEventShrinkRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    std::shared_ptr<string> attendeesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    std::shared_ptr<string> cardInstancesShrink_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> extraShrink_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<string> locationShrink_ = nullptr;
    std::shared_ptr<string> recurrenceShrink_ = nullptr;
    std::shared_ptr<string> remindersShrink_ = nullptr;
    std::shared_ptr<string> startShrink_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
