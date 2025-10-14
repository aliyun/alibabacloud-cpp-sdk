// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEETINGROOMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEETINGROOMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddMeetingRoomsRequestMeetingRoomsToAdd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddMeetingRoomsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMeetingRoomsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(MeetingRoomsToAdd, meetingRoomsToAdd_);
    };
    friend void from_json(const Darabonba::Json& j, AddMeetingRoomsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(MeetingRoomsToAdd, meetingRoomsToAdd_);
    };
    AddMeetingRoomsRequest() = default ;
    AddMeetingRoomsRequest(const AddMeetingRoomsRequest &) = default ;
    AddMeetingRoomsRequest(AddMeetingRoomsRequest &&) = default ;
    AddMeetingRoomsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMeetingRoomsRequest() = default ;
    AddMeetingRoomsRequest& operator=(const AddMeetingRoomsRequest &) = default ;
    AddMeetingRoomsRequest& operator=(AddMeetingRoomsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr
        && return this->eventId_ == nullptr && return this->meetingRoomsToAdd_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline AddMeetingRoomsRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline AddMeetingRoomsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // meetingRoomsToAdd Field Functions 
    bool hasMeetingRoomsToAdd() const { return this->meetingRoomsToAdd_ != nullptr;};
    void deleteMeetingRoomsToAdd() { this->meetingRoomsToAdd_ = nullptr;};
    inline const vector<AddMeetingRoomsRequestMeetingRoomsToAdd> & meetingRoomsToAdd() const { DARABONBA_PTR_GET_CONST(meetingRoomsToAdd_, vector<AddMeetingRoomsRequestMeetingRoomsToAdd>) };
    inline vector<AddMeetingRoomsRequestMeetingRoomsToAdd> meetingRoomsToAdd() { DARABONBA_PTR_GET(meetingRoomsToAdd_, vector<AddMeetingRoomsRequestMeetingRoomsToAdd>) };
    inline AddMeetingRoomsRequest& setMeetingRoomsToAdd(const vector<AddMeetingRoomsRequestMeetingRoomsToAdd> & meetingRoomsToAdd) { DARABONBA_PTR_SET_VALUE(meetingRoomsToAdd_, meetingRoomsToAdd) };
    inline AddMeetingRoomsRequest& setMeetingRoomsToAdd(vector<AddMeetingRoomsRequestMeetingRoomsToAdd> && meetingRoomsToAdd) { DARABONBA_PTR_SET_RVALUE(meetingRoomsToAdd_, meetingRoomsToAdd) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<AddMeetingRoomsRequestMeetingRoomsToAdd>> meetingRoomsToAdd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
