// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(pushNotification, pushNotification_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(pushNotification, pushNotification_);
    };
    DeleteEventRequest() = default ;
    DeleteEventRequest(const DeleteEventRequest &) = default ;
    DeleteEventRequest(DeleteEventRequest &&) = default ;
    DeleteEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventRequest() = default ;
    DeleteEventRequest& operator=(const DeleteEventRequest &) = default ;
    DeleteEventRequest& operator=(DeleteEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calendarId_ != nullptr
        && this->eventId_ != nullptr && this->pushNotification_ != nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline DeleteEventRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DeleteEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // pushNotification Field Functions 
    bool hasPushNotification() const { return this->pushNotification_ != nullptr;};
    void deletePushNotification() { this->pushNotification_ = nullptr;};
    inline bool pushNotification() const { DARABONBA_PTR_GET_DEFAULT(pushNotification_, false) };
    inline DeleteEventRequest& setPushNotification(bool pushNotification) { DARABONBA_PTR_SET_VALUE(pushNotification_, pushNotification) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<bool> pushNotification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
