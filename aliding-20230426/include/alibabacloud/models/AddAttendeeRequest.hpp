// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDATTENDEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDATTENDEEREQUEST_HPP_
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
    class AttendeesToAdd : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttendeesToAdd& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isOptional, isOptional_);
      };
      friend void from_json(const Darabonba::Json& j, AttendeesToAdd& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isOptional, isOptional_);
      };
      AttendeesToAdd() = default ;
      AttendeesToAdd(const AttendeesToAdd &) = default ;
      AttendeesToAdd(AttendeesToAdd &&) = default ;
      AttendeesToAdd(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttendeesToAdd() = default ;
      AttendeesToAdd& operator=(const AttendeesToAdd &) = default ;
      AttendeesToAdd& operator=(AttendeesToAdd &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->isOptional_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline AttendeesToAdd& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isOptional Field Functions 
      bool hasIsOptional() const { return this->isOptional_ != nullptr;};
      void deleteIsOptional() { this->isOptional_ = nullptr;};
      inline bool getIsOptional() const { DARABONBA_PTR_GET_DEFAULT(isOptional_, false) };
      inline AttendeesToAdd& setIsOptional(bool isOptional) { DARABONBA_PTR_SET_VALUE(isOptional_, isOptional) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<bool> isOptional_ {};
    };

    virtual bool empty() const override { return this->attendeesToAdd_ == nullptr
        && this->calendarId_ == nullptr && this->eventId_ == nullptr && this->chatNotification_ == nullptr && this->pushNotification_ == nullptr; };
    // attendeesToAdd Field Functions 
    bool hasAttendeesToAdd() const { return this->attendeesToAdd_ != nullptr;};
    void deleteAttendeesToAdd() { this->attendeesToAdd_ = nullptr;};
    inline const vector<AddAttendeeRequest::AttendeesToAdd> & getAttendeesToAdd() const { DARABONBA_PTR_GET_CONST(attendeesToAdd_, vector<AddAttendeeRequest::AttendeesToAdd>) };
    inline vector<AddAttendeeRequest::AttendeesToAdd> getAttendeesToAdd() { DARABONBA_PTR_GET(attendeesToAdd_, vector<AddAttendeeRequest::AttendeesToAdd>) };
    inline AddAttendeeRequest& setAttendeesToAdd(const vector<AddAttendeeRequest::AttendeesToAdd> & attendeesToAdd) { DARABONBA_PTR_SET_VALUE(attendeesToAdd_, attendeesToAdd) };
    inline AddAttendeeRequest& setAttendeesToAdd(vector<AddAttendeeRequest::AttendeesToAdd> && attendeesToAdd) { DARABONBA_PTR_SET_RVALUE(attendeesToAdd_, attendeesToAdd) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline AddAttendeeRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline AddAttendeeRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // chatNotification Field Functions 
    bool hasChatNotification() const { return this->chatNotification_ != nullptr;};
    void deleteChatNotification() { this->chatNotification_ = nullptr;};
    inline bool getChatNotification() const { DARABONBA_PTR_GET_DEFAULT(chatNotification_, false) };
    inline AddAttendeeRequest& setChatNotification(bool chatNotification) { DARABONBA_PTR_SET_VALUE(chatNotification_, chatNotification) };


    // pushNotification Field Functions 
    bool hasPushNotification() const { return this->pushNotification_ != nullptr;};
    void deletePushNotification() { this->pushNotification_ = nullptr;};
    inline bool getPushNotification() const { DARABONBA_PTR_GET_DEFAULT(pushNotification_, false) };
    inline AddAttendeeRequest& setPushNotification(bool pushNotification) { DARABONBA_PTR_SET_VALUE(pushNotification_, pushNotification) };


  protected:
    // This parameter is required.
    shared_ptr<vector<AddAttendeeRequest::AttendeesToAdd>> attendeesToAdd_ {};
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    shared_ptr<bool> chatNotification_ {};
    shared_ptr<bool> pushNotification_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
