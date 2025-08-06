// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEATTENDEESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEATTENDEESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RemoveAttendeeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAttendeeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttendeesToRemove, attendeesToRemoveShrink_);
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAttendeeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttendeesToRemove, attendeesToRemoveShrink_);
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
    };
    RemoveAttendeeShrinkRequest() = default ;
    RemoveAttendeeShrinkRequest(const RemoveAttendeeShrinkRequest &) = default ;
    RemoveAttendeeShrinkRequest(RemoveAttendeeShrinkRequest &&) = default ;
    RemoveAttendeeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAttendeeShrinkRequest() = default ;
    RemoveAttendeeShrinkRequest& operator=(const RemoveAttendeeShrinkRequest &) = default ;
    RemoveAttendeeShrinkRequest& operator=(RemoveAttendeeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attendeesToRemoveShrink_ != nullptr
        && this->calendarId_ != nullptr && this->eventId_ != nullptr; };
    // attendeesToRemoveShrink Field Functions 
    bool hasAttendeesToRemoveShrink() const { return this->attendeesToRemoveShrink_ != nullptr;};
    void deleteAttendeesToRemoveShrink() { this->attendeesToRemoveShrink_ = nullptr;};
    inline string attendeesToRemoveShrink() const { DARABONBA_PTR_GET_DEFAULT(attendeesToRemoveShrink_, "") };
    inline RemoveAttendeeShrinkRequest& setAttendeesToRemoveShrink(string attendeesToRemoveShrink) { DARABONBA_PTR_SET_VALUE(attendeesToRemoveShrink_, attendeesToRemoveShrink) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline RemoveAttendeeShrinkRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RemoveAttendeeShrinkRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


  protected:
    std::shared_ptr<string> attendeesToRemoveShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
