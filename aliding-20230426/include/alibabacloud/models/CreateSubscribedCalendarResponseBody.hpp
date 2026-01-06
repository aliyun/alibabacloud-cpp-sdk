// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIBEDCALENDARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIBEDCALENDARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateSubscribedCalendarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscribedCalendarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(calendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscribedCalendarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(calendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateSubscribedCalendarResponseBody() = default ;
    CreateSubscribedCalendarResponseBody(const CreateSubscribedCalendarResponseBody &) = default ;
    CreateSubscribedCalendarResponseBody(CreateSubscribedCalendarResponseBody &&) = default ;
    CreateSubscribedCalendarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscribedCalendarResponseBody() = default ;
    CreateSubscribedCalendarResponseBody& operator=(const CreateSubscribedCalendarResponseBody &) = default ;
    CreateSubscribedCalendarResponseBody& operator=(CreateSubscribedCalendarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr
        && this->requestId_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline CreateSubscribedCalendarResponseBody& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSubscribedCalendarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> calendarId_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
