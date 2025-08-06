// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attendees, attendeesShrink_);
      DARABONBA_PTR_TO_JSON(CardInstances, cardInstancesShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(End, endShrink_);
      DARABONBA_PTR_TO_JSON(Extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(Location, locationShrink_);
      DARABONBA_PTR_TO_JSON(OnlineMeetingInfo, onlineMeetingInfoShrink_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrenceShrink_);
      DARABONBA_PTR_TO_JSON(Reminders, remindersShrink_);
      DARABONBA_PTR_TO_JSON(RichTextDescription, richTextDescriptionShrink_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(UiConfigs, uiConfigsShrink_);
      DARABONBA_PTR_TO_JSON(calendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(start, startShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attendees, attendeesShrink_);
      DARABONBA_PTR_FROM_JSON(CardInstances, cardInstancesShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(End, endShrink_);
      DARABONBA_PTR_FROM_JSON(Extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(Location, locationShrink_);
      DARABONBA_PTR_FROM_JSON(OnlineMeetingInfo, onlineMeetingInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrenceShrink_);
      DARABONBA_PTR_FROM_JSON(Reminders, remindersShrink_);
      DARABONBA_PTR_FROM_JSON(RichTextDescription, richTextDescriptionShrink_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(UiConfigs, uiConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(calendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(start, startShrink_);
    };
    CreateEventShrinkRequest() = default ;
    CreateEventShrinkRequest(const CreateEventShrinkRequest &) = default ;
    CreateEventShrinkRequest(CreateEventShrinkRequest &&) = default ;
    CreateEventShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventShrinkRequest() = default ;
    CreateEventShrinkRequest& operator=(const CreateEventShrinkRequest &) = default ;
    CreateEventShrinkRequest& operator=(CreateEventShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attendeesShrink_ != nullptr
        && this->cardInstancesShrink_ != nullptr && this->description_ != nullptr && this->endShrink_ != nullptr && this->extraShrink_ != nullptr && this->isAllDay_ != nullptr
        && this->locationShrink_ != nullptr && this->onlineMeetingInfoShrink_ != nullptr && this->recurrenceShrink_ != nullptr && this->remindersShrink_ != nullptr && this->richTextDescriptionShrink_ != nullptr
        && this->summary_ != nullptr && this->uiConfigsShrink_ != nullptr && this->calendarId_ != nullptr && this->startShrink_ != nullptr; };
    // attendeesShrink Field Functions 
    bool hasAttendeesShrink() const { return this->attendeesShrink_ != nullptr;};
    void deleteAttendeesShrink() { this->attendeesShrink_ = nullptr;};
    inline string attendeesShrink() const { DARABONBA_PTR_GET_DEFAULT(attendeesShrink_, "") };
    inline CreateEventShrinkRequest& setAttendeesShrink(string attendeesShrink) { DARABONBA_PTR_SET_VALUE(attendeesShrink_, attendeesShrink) };


    // cardInstancesShrink Field Functions 
    bool hasCardInstancesShrink() const { return this->cardInstancesShrink_ != nullptr;};
    void deleteCardInstancesShrink() { this->cardInstancesShrink_ = nullptr;};
    inline string cardInstancesShrink() const { DARABONBA_PTR_GET_DEFAULT(cardInstancesShrink_, "") };
    inline CreateEventShrinkRequest& setCardInstancesShrink(string cardInstancesShrink) { DARABONBA_PTR_SET_VALUE(cardInstancesShrink_, cardInstancesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endShrink Field Functions 
    bool hasEndShrink() const { return this->endShrink_ != nullptr;};
    void deleteEndShrink() { this->endShrink_ = nullptr;};
    inline string endShrink() const { DARABONBA_PTR_GET_DEFAULT(endShrink_, "") };
    inline CreateEventShrinkRequest& setEndShrink(string endShrink) { DARABONBA_PTR_SET_VALUE(endShrink_, endShrink) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string extraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline CreateEventShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline CreateEventShrinkRequest& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // locationShrink Field Functions 
    bool hasLocationShrink() const { return this->locationShrink_ != nullptr;};
    void deleteLocationShrink() { this->locationShrink_ = nullptr;};
    inline string locationShrink() const { DARABONBA_PTR_GET_DEFAULT(locationShrink_, "") };
    inline CreateEventShrinkRequest& setLocationShrink(string locationShrink) { DARABONBA_PTR_SET_VALUE(locationShrink_, locationShrink) };


    // onlineMeetingInfoShrink Field Functions 
    bool hasOnlineMeetingInfoShrink() const { return this->onlineMeetingInfoShrink_ != nullptr;};
    void deleteOnlineMeetingInfoShrink() { this->onlineMeetingInfoShrink_ = nullptr;};
    inline string onlineMeetingInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(onlineMeetingInfoShrink_, "") };
    inline CreateEventShrinkRequest& setOnlineMeetingInfoShrink(string onlineMeetingInfoShrink) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfoShrink_, onlineMeetingInfoShrink) };


    // recurrenceShrink Field Functions 
    bool hasRecurrenceShrink() const { return this->recurrenceShrink_ != nullptr;};
    void deleteRecurrenceShrink() { this->recurrenceShrink_ = nullptr;};
    inline string recurrenceShrink() const { DARABONBA_PTR_GET_DEFAULT(recurrenceShrink_, "") };
    inline CreateEventShrinkRequest& setRecurrenceShrink(string recurrenceShrink) { DARABONBA_PTR_SET_VALUE(recurrenceShrink_, recurrenceShrink) };


    // remindersShrink Field Functions 
    bool hasRemindersShrink() const { return this->remindersShrink_ != nullptr;};
    void deleteRemindersShrink() { this->remindersShrink_ = nullptr;};
    inline string remindersShrink() const { DARABONBA_PTR_GET_DEFAULT(remindersShrink_, "") };
    inline CreateEventShrinkRequest& setRemindersShrink(string remindersShrink) { DARABONBA_PTR_SET_VALUE(remindersShrink_, remindersShrink) };


    // richTextDescriptionShrink Field Functions 
    bool hasRichTextDescriptionShrink() const { return this->richTextDescriptionShrink_ != nullptr;};
    void deleteRichTextDescriptionShrink() { this->richTextDescriptionShrink_ = nullptr;};
    inline string richTextDescriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(richTextDescriptionShrink_, "") };
    inline CreateEventShrinkRequest& setRichTextDescriptionShrink(string richTextDescriptionShrink) { DARABONBA_PTR_SET_VALUE(richTextDescriptionShrink_, richTextDescriptionShrink) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateEventShrinkRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // uiConfigsShrink Field Functions 
    bool hasUiConfigsShrink() const { return this->uiConfigsShrink_ != nullptr;};
    void deleteUiConfigsShrink() { this->uiConfigsShrink_ = nullptr;};
    inline string uiConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(uiConfigsShrink_, "") };
    inline CreateEventShrinkRequest& setUiConfigsShrink(string uiConfigsShrink) { DARABONBA_PTR_SET_VALUE(uiConfigsShrink_, uiConfigsShrink) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline CreateEventShrinkRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // startShrink Field Functions 
    bool hasStartShrink() const { return this->startShrink_ != nullptr;};
    void deleteStartShrink() { this->startShrink_ = nullptr;};
    inline string startShrink() const { DARABONBA_PTR_GET_DEFAULT(startShrink_, "") };
    inline CreateEventShrinkRequest& setStartShrink(string startShrink) { DARABONBA_PTR_SET_VALUE(startShrink_, startShrink) };


  protected:
    std::shared_ptr<string> attendeesShrink_ = nullptr;
    std::shared_ptr<string> cardInstancesShrink_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endShrink_ = nullptr;
    std::shared_ptr<string> extraShrink_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<string> locationShrink_ = nullptr;
    std::shared_ptr<string> onlineMeetingInfoShrink_ = nullptr;
    std::shared_ptr<string> recurrenceShrink_ = nullptr;
    std::shared_ptr<string> remindersShrink_ = nullptr;
    std::shared_ptr<string> richTextDescriptionShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> uiConfigsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
