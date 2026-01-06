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
      DARABONBA_PTR_TO_JSON(categories, categoriesShrink_);
      DARABONBA_PTR_TO_JSON(freeBusyStatus, freeBusyStatus_);
      DARABONBA_PTR_TO_JSON(onlineMeetingInfo, onlineMeetingInfoShrink_);
      DARABONBA_PTR_TO_JSON(richTextDescription, richTextDescriptionShrink_);
      DARABONBA_PTR_TO_JSON(uiConfigs, uiConfigsShrink_);
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
      DARABONBA_PTR_FROM_JSON(categories, categoriesShrink_);
      DARABONBA_PTR_FROM_JSON(freeBusyStatus, freeBusyStatus_);
      DARABONBA_PTR_FROM_JSON(onlineMeetingInfo, onlineMeetingInfoShrink_);
      DARABONBA_PTR_FROM_JSON(richTextDescription, richTextDescriptionShrink_);
      DARABONBA_PTR_FROM_JSON(uiConfigs, uiConfigsShrink_);
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
    virtual bool empty() const override { return this->attendeesShrink_ == nullptr
        && this->calendarId_ == nullptr && this->cardInstancesShrink_ == nullptr && this->description_ == nullptr && this->endShrink_ == nullptr && this->eventId_ == nullptr
        && this->extraShrink_ == nullptr && this->isAllDay_ == nullptr && this->locationShrink_ == nullptr && this->recurrenceShrink_ == nullptr && this->remindersShrink_ == nullptr
        && this->startShrink_ == nullptr && this->summary_ == nullptr && this->categoriesShrink_ == nullptr && this->freeBusyStatus_ == nullptr && this->onlineMeetingInfoShrink_ == nullptr
        && this->richTextDescriptionShrink_ == nullptr && this->uiConfigsShrink_ == nullptr; };
    // attendeesShrink Field Functions 
    bool hasAttendeesShrink() const { return this->attendeesShrink_ != nullptr;};
    void deleteAttendeesShrink() { this->attendeesShrink_ = nullptr;};
    inline string getAttendeesShrink() const { DARABONBA_PTR_GET_DEFAULT(attendeesShrink_, "") };
    inline PatchEventShrinkRequest& setAttendeesShrink(string attendeesShrink) { DARABONBA_PTR_SET_VALUE(attendeesShrink_, attendeesShrink) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline PatchEventShrinkRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // cardInstancesShrink Field Functions 
    bool hasCardInstancesShrink() const { return this->cardInstancesShrink_ != nullptr;};
    void deleteCardInstancesShrink() { this->cardInstancesShrink_ = nullptr;};
    inline string getCardInstancesShrink() const { DARABONBA_PTR_GET_DEFAULT(cardInstancesShrink_, "") };
    inline PatchEventShrinkRequest& setCardInstancesShrink(string cardInstancesShrink) { DARABONBA_PTR_SET_VALUE(cardInstancesShrink_, cardInstancesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PatchEventShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endShrink Field Functions 
    bool hasEndShrink() const { return this->endShrink_ != nullptr;};
    void deleteEndShrink() { this->endShrink_ = nullptr;};
    inline string getEndShrink() const { DARABONBA_PTR_GET_DEFAULT(endShrink_, "") };
    inline PatchEventShrinkRequest& setEndShrink(string endShrink) { DARABONBA_PTR_SET_VALUE(endShrink_, endShrink) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline PatchEventShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string getExtraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline PatchEventShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool getIsAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline PatchEventShrinkRequest& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // locationShrink Field Functions 
    bool hasLocationShrink() const { return this->locationShrink_ != nullptr;};
    void deleteLocationShrink() { this->locationShrink_ = nullptr;};
    inline string getLocationShrink() const { DARABONBA_PTR_GET_DEFAULT(locationShrink_, "") };
    inline PatchEventShrinkRequest& setLocationShrink(string locationShrink) { DARABONBA_PTR_SET_VALUE(locationShrink_, locationShrink) };


    // recurrenceShrink Field Functions 
    bool hasRecurrenceShrink() const { return this->recurrenceShrink_ != nullptr;};
    void deleteRecurrenceShrink() { this->recurrenceShrink_ = nullptr;};
    inline string getRecurrenceShrink() const { DARABONBA_PTR_GET_DEFAULT(recurrenceShrink_, "") };
    inline PatchEventShrinkRequest& setRecurrenceShrink(string recurrenceShrink) { DARABONBA_PTR_SET_VALUE(recurrenceShrink_, recurrenceShrink) };


    // remindersShrink Field Functions 
    bool hasRemindersShrink() const { return this->remindersShrink_ != nullptr;};
    void deleteRemindersShrink() { this->remindersShrink_ = nullptr;};
    inline string getRemindersShrink() const { DARABONBA_PTR_GET_DEFAULT(remindersShrink_, "") };
    inline PatchEventShrinkRequest& setRemindersShrink(string remindersShrink) { DARABONBA_PTR_SET_VALUE(remindersShrink_, remindersShrink) };


    // startShrink Field Functions 
    bool hasStartShrink() const { return this->startShrink_ != nullptr;};
    void deleteStartShrink() { this->startShrink_ = nullptr;};
    inline string getStartShrink() const { DARABONBA_PTR_GET_DEFAULT(startShrink_, "") };
    inline PatchEventShrinkRequest& setStartShrink(string startShrink) { DARABONBA_PTR_SET_VALUE(startShrink_, startShrink) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline PatchEventShrinkRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // categoriesShrink Field Functions 
    bool hasCategoriesShrink() const { return this->categoriesShrink_ != nullptr;};
    void deleteCategoriesShrink() { this->categoriesShrink_ = nullptr;};
    inline string getCategoriesShrink() const { DARABONBA_PTR_GET_DEFAULT(categoriesShrink_, "") };
    inline PatchEventShrinkRequest& setCategoriesShrink(string categoriesShrink) { DARABONBA_PTR_SET_VALUE(categoriesShrink_, categoriesShrink) };


    // freeBusyStatus Field Functions 
    bool hasFreeBusyStatus() const { return this->freeBusyStatus_ != nullptr;};
    void deleteFreeBusyStatus() { this->freeBusyStatus_ = nullptr;};
    inline string getFreeBusyStatus() const { DARABONBA_PTR_GET_DEFAULT(freeBusyStatus_, "") };
    inline PatchEventShrinkRequest& setFreeBusyStatus(string freeBusyStatus) { DARABONBA_PTR_SET_VALUE(freeBusyStatus_, freeBusyStatus) };


    // onlineMeetingInfoShrink Field Functions 
    bool hasOnlineMeetingInfoShrink() const { return this->onlineMeetingInfoShrink_ != nullptr;};
    void deleteOnlineMeetingInfoShrink() { this->onlineMeetingInfoShrink_ = nullptr;};
    inline string getOnlineMeetingInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(onlineMeetingInfoShrink_, "") };
    inline PatchEventShrinkRequest& setOnlineMeetingInfoShrink(string onlineMeetingInfoShrink) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfoShrink_, onlineMeetingInfoShrink) };


    // richTextDescriptionShrink Field Functions 
    bool hasRichTextDescriptionShrink() const { return this->richTextDescriptionShrink_ != nullptr;};
    void deleteRichTextDescriptionShrink() { this->richTextDescriptionShrink_ = nullptr;};
    inline string getRichTextDescriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(richTextDescriptionShrink_, "") };
    inline PatchEventShrinkRequest& setRichTextDescriptionShrink(string richTextDescriptionShrink) { DARABONBA_PTR_SET_VALUE(richTextDescriptionShrink_, richTextDescriptionShrink) };


    // uiConfigsShrink Field Functions 
    bool hasUiConfigsShrink() const { return this->uiConfigsShrink_ != nullptr;};
    void deleteUiConfigsShrink() { this->uiConfigsShrink_ = nullptr;};
    inline string getUiConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(uiConfigsShrink_, "") };
    inline PatchEventShrinkRequest& setUiConfigsShrink(string uiConfigsShrink) { DARABONBA_PTR_SET_VALUE(uiConfigsShrink_, uiConfigsShrink) };


  protected:
    shared_ptr<string> attendeesShrink_ {};
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
    shared_ptr<string> cardInstancesShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> endShrink_ {};
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    shared_ptr<string> extraShrink_ {};
    shared_ptr<bool> isAllDay_ {};
    shared_ptr<string> locationShrink_ {};
    shared_ptr<string> recurrenceShrink_ {};
    shared_ptr<string> remindersShrink_ {};
    shared_ptr<string> startShrink_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<string> categoriesShrink_ {};
    shared_ptr<string> freeBusyStatus_ {};
    shared_ptr<string> onlineMeetingInfoShrink_ {};
    shared_ptr<string> richTextDescriptionShrink_ {};
    shared_ptr<string> uiConfigsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
