// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEMEETINGROOMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEMEETINGROOMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveMeetingRoomsRequestMeetingRoomsToRemove.hpp>
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
    virtual bool empty() const override { return this->calendarId_ == nullptr
        && return this->eventId_ == nullptr && return this->meetingRoomsToRemove_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline RemoveMeetingRoomsRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RemoveMeetingRoomsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // meetingRoomsToRemove Field Functions 
    bool hasMeetingRoomsToRemove() const { return this->meetingRoomsToRemove_ != nullptr;};
    void deleteMeetingRoomsToRemove() { this->meetingRoomsToRemove_ = nullptr;};
    inline const vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove> & meetingRoomsToRemove() const { DARABONBA_PTR_GET_CONST(meetingRoomsToRemove_, vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove>) };
    inline vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove> meetingRoomsToRemove() { DARABONBA_PTR_GET(meetingRoomsToRemove_, vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove>) };
    inline RemoveMeetingRoomsRequest& setMeetingRoomsToRemove(const vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove> & meetingRoomsToRemove) { DARABONBA_PTR_SET_VALUE(meetingRoomsToRemove_, meetingRoomsToRemove) };
    inline RemoveMeetingRoomsRequest& setMeetingRoomsToRemove(vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove> && meetingRoomsToRemove) { DARABONBA_PTR_SET_RVALUE(meetingRoomsToRemove_, meetingRoomsToRemove) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove>> meetingRoomsToRemove_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
