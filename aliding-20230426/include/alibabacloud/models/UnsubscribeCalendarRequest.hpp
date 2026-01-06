// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNSUBSCRIBECALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNSUBSCRIBECALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UnsubscribeCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnsubscribeCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
    };
    friend void from_json(const Darabonba::Json& j, UnsubscribeCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
    };
    UnsubscribeCalendarRequest() = default ;
    UnsubscribeCalendarRequest(const UnsubscribeCalendarRequest &) = default ;
    UnsubscribeCalendarRequest(UnsubscribeCalendarRequest &&) = default ;
    UnsubscribeCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnsubscribeCalendarRequest() = default ;
    UnsubscribeCalendarRequest& operator=(const UnsubscribeCalendarRequest &) = default ;
    UnsubscribeCalendarRequest& operator=(UnsubscribeCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline UnsubscribeCalendarRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


  protected:
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
