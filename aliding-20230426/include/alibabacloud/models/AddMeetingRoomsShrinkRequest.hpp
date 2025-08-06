// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEETINGROOMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEETINGROOMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddMeetingRoomsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMeetingRoomsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(MeetingRoomsToAdd, meetingRoomsToAddShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddMeetingRoomsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(MeetingRoomsToAdd, meetingRoomsToAddShrink_);
    };
    AddMeetingRoomsShrinkRequest() = default ;
    AddMeetingRoomsShrinkRequest(const AddMeetingRoomsShrinkRequest &) = default ;
    AddMeetingRoomsShrinkRequest(AddMeetingRoomsShrinkRequest &&) = default ;
    AddMeetingRoomsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMeetingRoomsShrinkRequest() = default ;
    AddMeetingRoomsShrinkRequest& operator=(const AddMeetingRoomsShrinkRequest &) = default ;
    AddMeetingRoomsShrinkRequest& operator=(AddMeetingRoomsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calendarId_ != nullptr
        && this->eventId_ != nullptr && this->meetingRoomsToAddShrink_ != nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline AddMeetingRoomsShrinkRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline AddMeetingRoomsShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // meetingRoomsToAddShrink Field Functions 
    bool hasMeetingRoomsToAddShrink() const { return this->meetingRoomsToAddShrink_ != nullptr;};
    void deleteMeetingRoomsToAddShrink() { this->meetingRoomsToAddShrink_ = nullptr;};
    inline string meetingRoomsToAddShrink() const { DARABONBA_PTR_GET_DEFAULT(meetingRoomsToAddShrink_, "") };
    inline AddMeetingRoomsShrinkRequest& setMeetingRoomsToAddShrink(string meetingRoomsToAddShrink) { DARABONBA_PTR_SET_VALUE(meetingRoomsToAddShrink_, meetingRoomsToAddShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> meetingRoomsToAddShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
