// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDATTENDEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDATTENDEEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddAttendeeRequestAttendeesToAdd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddAttendeeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAttendeeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttendeesToAdd, attendeesToAdd_);
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(chatNotification, chatNotification_);
      DARABONBA_PTR_TO_JSON(pushNotification, pushNotification_);
    };
    friend void from_json(const Darabonba::Json& j, AddAttendeeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttendeesToAdd, attendeesToAdd_);
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(chatNotification, chatNotification_);
      DARABONBA_PTR_FROM_JSON(pushNotification, pushNotification_);
    };
    AddAttendeeRequest() = default ;
    AddAttendeeRequest(const AddAttendeeRequest &) = default ;
    AddAttendeeRequest(AddAttendeeRequest &&) = default ;
    AddAttendeeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAttendeeRequest() = default ;
    AddAttendeeRequest& operator=(const AddAttendeeRequest &) = default ;
    AddAttendeeRequest& operator=(AddAttendeeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendeesToAdd_ == nullptr
        && return this->calendarId_ == nullptr && return this->eventId_ == nullptr && return this->chatNotification_ == nullptr && return this->pushNotification_ == nullptr; };
    // attendeesToAdd Field Functions 
    bool hasAttendeesToAdd() const { return this->attendeesToAdd_ != nullptr;};
    void deleteAttendeesToAdd() { this->attendeesToAdd_ = nullptr;};
    inline const vector<AddAttendeeRequestAttendeesToAdd> & attendeesToAdd() const { DARABONBA_PTR_GET_CONST(attendeesToAdd_, vector<AddAttendeeRequestAttendeesToAdd>) };
    inline vector<AddAttendeeRequestAttendeesToAdd> attendeesToAdd() { DARABONBA_PTR_GET(attendeesToAdd_, vector<AddAttendeeRequestAttendeesToAdd>) };
    inline AddAttendeeRequest& setAttendeesToAdd(const vector<AddAttendeeRequestAttendeesToAdd> & attendeesToAdd) { DARABONBA_PTR_SET_VALUE(attendeesToAdd_, attendeesToAdd) };
    inline AddAttendeeRequest& setAttendeesToAdd(vector<AddAttendeeRequestAttendeesToAdd> && attendeesToAdd) { DARABONBA_PTR_SET_RVALUE(attendeesToAdd_, attendeesToAdd) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline AddAttendeeRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline AddAttendeeRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // chatNotification Field Functions 
    bool hasChatNotification() const { return this->chatNotification_ != nullptr;};
    void deleteChatNotification() { this->chatNotification_ = nullptr;};
    inline bool chatNotification() const { DARABONBA_PTR_GET_DEFAULT(chatNotification_, false) };
    inline AddAttendeeRequest& setChatNotification(bool chatNotification) { DARABONBA_PTR_SET_VALUE(chatNotification_, chatNotification) };


    // pushNotification Field Functions 
    bool hasPushNotification() const { return this->pushNotification_ != nullptr;};
    void deletePushNotification() { this->pushNotification_ = nullptr;};
    inline bool pushNotification() const { DARABONBA_PTR_GET_DEFAULT(pushNotification_, false) };
    inline AddAttendeeRequest& setPushNotification(bool pushNotification) { DARABONBA_PTR_SET_VALUE(pushNotification_, pushNotification) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<AddAttendeeRequestAttendeesToAdd>> attendeesToAdd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<bool> chatNotification_ = nullptr;
    std::shared_ptr<bool> pushNotification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
