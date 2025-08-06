// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIBEDCALENDARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIBEDCALENDARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSubscribedCalendarResponseBodySubscribeScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSubscribedCalendarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscribedCalendarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(author, author_);
      DARABONBA_PTR_TO_JSON(calendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(managers, managers_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(subscribeScope, subscribeScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscribedCalendarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(author, author_);
      DARABONBA_PTR_FROM_JSON(calendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(managers, managers_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(subscribeScope, subscribeScope_);
    };
    GetSubscribedCalendarResponseBody() = default ;
    GetSubscribedCalendarResponseBody(const GetSubscribedCalendarResponseBody &) = default ;
    GetSubscribedCalendarResponseBody(GetSubscribedCalendarResponseBody &&) = default ;
    GetSubscribedCalendarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscribedCalendarResponseBody() = default ;
    GetSubscribedCalendarResponseBody& operator=(const GetSubscribedCalendarResponseBody &) = default ;
    GetSubscribedCalendarResponseBody& operator=(GetSubscribedCalendarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->author_ != nullptr
        && this->calendarId_ != nullptr && this->description_ != nullptr && this->managers_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr
        && this->subscribeScope_ != nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline GetSubscribedCalendarResponseBody& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline GetSubscribedCalendarResponseBody& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSubscribedCalendarResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managers Field Functions 
    bool hasManagers() const { return this->managers_ != nullptr;};
    void deleteManagers() { this->managers_ = nullptr;};
    inline const vector<string> & managers() const { DARABONBA_PTR_GET_CONST(managers_, vector<string>) };
    inline vector<string> managers() { DARABONBA_PTR_GET(managers_, vector<string>) };
    inline GetSubscribedCalendarResponseBody& setManagers(const vector<string> & managers) { DARABONBA_PTR_SET_VALUE(managers_, managers) };
    inline GetSubscribedCalendarResponseBody& setManagers(vector<string> && managers) { DARABONBA_PTR_SET_RVALUE(managers_, managers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSubscribedCalendarResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubscribedCalendarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscribeScope Field Functions 
    bool hasSubscribeScope() const { return this->subscribeScope_ != nullptr;};
    void deleteSubscribeScope() { this->subscribeScope_ = nullptr;};
    inline const GetSubscribedCalendarResponseBodySubscribeScope & subscribeScope() const { DARABONBA_PTR_GET_CONST(subscribeScope_, GetSubscribedCalendarResponseBodySubscribeScope) };
    inline GetSubscribedCalendarResponseBodySubscribeScope subscribeScope() { DARABONBA_PTR_GET(subscribeScope_, GetSubscribedCalendarResponseBodySubscribeScope) };
    inline GetSubscribedCalendarResponseBody& setSubscribeScope(const GetSubscribedCalendarResponseBodySubscribeScope & subscribeScope) { DARABONBA_PTR_SET_VALUE(subscribeScope_, subscribeScope) };
    inline GetSubscribedCalendarResponseBody& setSubscribeScope(GetSubscribedCalendarResponseBodySubscribeScope && subscribeScope) { DARABONBA_PTR_SET_RVALUE(subscribeScope_, subscribeScope) };


  protected:
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<string> calendarId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> managers_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetSubscribedCalendarResponseBodySubscribeScope> subscribeScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
