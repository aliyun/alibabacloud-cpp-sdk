// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEMEETINGROOMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEMEETINGROOMSREQUEST_HPP_
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
  class RemoveMeetingRoomsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveMeetingRoomsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(MeetingRoomsToRemove, meetingRoomsToRemove_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveMeetingRoomsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(MeetingRoomsToRemove, meetingRoomsToRemove_);
    };
    RemoveMeetingRoomsRequest() = default ;
    RemoveMeetingRoomsRequest(const RemoveMeetingRoomsRequest &) = default ;
    RemoveMeetingRoomsRequest(RemoveMeetingRoomsRequest &&) = default ;
    RemoveMeetingRoomsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveMeetingRoomsRequest() = default ;
    RemoveMeetingRoomsRequest& operator=(const RemoveMeetingRoomsRequest &) = default ;
    RemoveMeetingRoomsRequest& operator=(RemoveMeetingRoomsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MeetingRoomsToRemove : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MeetingRoomsToRemove& obj) { 
        DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      };
      friend void from_json(const Darabonba::Json& j, MeetingRoomsToRemove& obj) { 
        DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      };
      MeetingRoomsToRemove() = default ;
      MeetingRoomsToRemove(const MeetingRoomsToRemove &) = default ;
      MeetingRoomsToRemove(MeetingRoomsToRemove &&) = default ;
      MeetingRoomsToRemove(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MeetingRoomsToRemove() = default ;
      MeetingRoomsToRemove& operator=(const MeetingRoomsToRemove &) = default ;
      MeetingRoomsToRemove& operator=(MeetingRoomsToRemove &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->roomId_ == nullptr; };
      // roomId Field Functions 
      bool hasRoomId() const { return this->roomId_ != nullptr;};
      void deleteRoomId() { this->roomId_ = nullptr;};
      inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
      inline MeetingRoomsToRemove& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    protected:
      // This parameter is required.
      shared_ptr<string> roomId_ {};
    };

    virtual bool empty() const override { return this->calendarId_ == nullptr
        && this->eventId_ == nullptr && this->meetingRoomsToRemove_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline RemoveMeetingRoomsRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RemoveMeetingRoomsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // meetingRoomsToRemove Field Functions 
    bool hasMeetingRoomsToRemove() const { return this->meetingRoomsToRemove_ != nullptr;};
    void deleteMeetingRoomsToRemove() { this->meetingRoomsToRemove_ = nullptr;};
    inline const vector<RemoveMeetingRoomsRequest::MeetingRoomsToRemove> & getMeetingRoomsToRemove() const { DARABONBA_PTR_GET_CONST(meetingRoomsToRemove_, vector<RemoveMeetingRoomsRequest::MeetingRoomsToRemove>) };
    inline vector<RemoveMeetingRoomsRequest::MeetingRoomsToRemove> getMeetingRoomsToRemove() { DARABONBA_PTR_GET(meetingRoomsToRemove_, vector<RemoveMeetingRoomsRequest::MeetingRoomsToRemove>) };
    inline RemoveMeetingRoomsRequest& setMeetingRoomsToRemove(const vector<RemoveMeetingRoomsRequest::MeetingRoomsToRemove> & meetingRoomsToRemove) { DARABONBA_PTR_SET_VALUE(meetingRoomsToRemove_, meetingRoomsToRemove) };
    inline RemoveMeetingRoomsRequest& setMeetingRoomsToRemove(vector<RemoveMeetingRoomsRequest::MeetingRoomsToRemove> && meetingRoomsToRemove) { DARABONBA_PTR_SET_RVALUE(meetingRoomsToRemove_, meetingRoomsToRemove) };


  protected:
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    shared_ptr<vector<RemoveMeetingRoomsRequest::MeetingRoomsToRemove>> meetingRoomsToRemove_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
