// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBECALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBECALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SubscribeCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
    };
    SubscribeCalendarRequest() = default ;
    SubscribeCalendarRequest(const SubscribeCalendarRequest &) = default ;
    SubscribeCalendarRequest(SubscribeCalendarRequest &&) = default ;
    SubscribeCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeCalendarRequest() = default ;
    SubscribeCalendarRequest& operator=(const SubscribeCalendarRequest &) = default ;
    SubscribeCalendarRequest& operator=(SubscribeCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline SubscribeCalendarRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
