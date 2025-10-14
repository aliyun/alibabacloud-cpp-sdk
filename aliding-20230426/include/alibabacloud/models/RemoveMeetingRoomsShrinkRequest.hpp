// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEMEETINGROOMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEMEETINGROOMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RemoveMeetingRoomsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveMeetingRoomsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(MeetingRoomsToRemove, meetingRoomsToRemoveShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveMeetingRoomsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(MeetingRoomsToRemove, meetingRoomsToRemoveShrink_);
    };
    RemoveMeetingRoomsShrinkRequest() = default ;
    RemoveMeetingRoomsShrinkRequest(const RemoveMeetingRoomsShrinkRequest &) = default ;
    RemoveMeetingRoomsShrinkRequest(RemoveMeetingRoomsShrinkRequest &&) = default ;
    RemoveMeetingRoomsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveMeetingRoomsShrinkRequest() = default ;
    RemoveMeetingRoomsShrinkRequest& operator=(const RemoveMeetingRoomsShrinkRequest &) = default ;
    RemoveMeetingRoomsShrinkRequest& operator=(RemoveMeetingRoomsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr
        && return this->eventId_ == nullptr && return this->meetingRoomsToRemoveShrink_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline RemoveMeetingRoomsShrinkRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RemoveMeetingRoomsShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // meetingRoomsToRemoveShrink Field Functions 
    bool hasMeetingRoomsToRemoveShrink() const { return this->meetingRoomsToRemoveShrink_ != nullptr;};
    void deleteMeetingRoomsToRemoveShrink() { this->meetingRoomsToRemoveShrink_ = nullptr;};
    inline string meetingRoomsToRemoveShrink() const { DARABONBA_PTR_GET_DEFAULT(meetingRoomsToRemoveShrink_, "") };
    inline RemoveMeetingRoomsShrinkRequest& setMeetingRoomsToRemoveShrink(string meetingRoomsToRemoveShrink) { DARABONBA_PTR_SET_VALUE(meetingRoomsToRemoveShrink_, meetingRoomsToRemoveShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> meetingRoomsToRemoveShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
