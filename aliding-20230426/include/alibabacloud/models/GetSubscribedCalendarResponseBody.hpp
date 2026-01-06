// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIBEDCALENDARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIBEDCALENDARRESPONSEBODY_HPP_
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
    class SubscribeScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscribeScope& obj) { 
        DARABONBA_PTR_TO_JSON(CorpIds, corpIds_);
        DARABONBA_PTR_TO_JSON(OpenConversationIds, openConversationIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, SubscribeScope& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpIds, corpIds_);
        DARABONBA_PTR_FROM_JSON(OpenConversationIds, openConversationIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      SubscribeScope() = default ;
      SubscribeScope(const SubscribeScope &) = default ;
      SubscribeScope(SubscribeScope &&) = default ;
      SubscribeScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscribeScope() = default ;
      SubscribeScope& operator=(const SubscribeScope &) = default ;
      SubscribeScope& operator=(SubscribeScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->corpIds_ == nullptr
        && this->openConversationIds_ == nullptr && this->userIds_ == nullptr; };
      // corpIds Field Functions 
      bool hasCorpIds() const { return this->corpIds_ != nullptr;};
      void deleteCorpIds() { this->corpIds_ = nullptr;};
      inline const vector<string> & getCorpIds() const { DARABONBA_PTR_GET_CONST(corpIds_, vector<string>) };
      inline vector<string> getCorpIds() { DARABONBA_PTR_GET(corpIds_, vector<string>) };
      inline SubscribeScope& setCorpIds(const vector<string> & corpIds) { DARABONBA_PTR_SET_VALUE(corpIds_, corpIds) };
      inline SubscribeScope& setCorpIds(vector<string> && corpIds) { DARABONBA_PTR_SET_RVALUE(corpIds_, corpIds) };


      // openConversationIds Field Functions 
      bool hasOpenConversationIds() const { return this->openConversationIds_ != nullptr;};
      void deleteOpenConversationIds() { this->openConversationIds_ = nullptr;};
      inline const vector<string> & getOpenConversationIds() const { DARABONBA_PTR_GET_CONST(openConversationIds_, vector<string>) };
      inline vector<string> getOpenConversationIds() { DARABONBA_PTR_GET(openConversationIds_, vector<string>) };
      inline SubscribeScope& setOpenConversationIds(const vector<string> & openConversationIds) { DARABONBA_PTR_SET_VALUE(openConversationIds_, openConversationIds) };
      inline SubscribeScope& setOpenConversationIds(vector<string> && openConversationIds) { DARABONBA_PTR_SET_RVALUE(openConversationIds_, openConversationIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline SubscribeScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline SubscribeScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      shared_ptr<vector<string>> corpIds_ {};
      shared_ptr<vector<string>> openConversationIds_ {};
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->author_ == nullptr
        && this->calendarId_ == nullptr && this->description_ == nullptr && this->managers_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->subscribeScope_ == nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline GetSubscribedCalendarResponseBody& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline GetSubscribedCalendarResponseBody& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSubscribedCalendarResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managers Field Functions 
    bool hasManagers() const { return this->managers_ != nullptr;};
    void deleteManagers() { this->managers_ = nullptr;};
    inline const vector<string> & getManagers() const { DARABONBA_PTR_GET_CONST(managers_, vector<string>) };
    inline vector<string> getManagers() { DARABONBA_PTR_GET(managers_, vector<string>) };
    inline GetSubscribedCalendarResponseBody& setManagers(const vector<string> & managers) { DARABONBA_PTR_SET_VALUE(managers_, managers) };
    inline GetSubscribedCalendarResponseBody& setManagers(vector<string> && managers) { DARABONBA_PTR_SET_RVALUE(managers_, managers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSubscribedCalendarResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubscribedCalendarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscribeScope Field Functions 
    bool hasSubscribeScope() const { return this->subscribeScope_ != nullptr;};
    void deleteSubscribeScope() { this->subscribeScope_ = nullptr;};
    inline const GetSubscribedCalendarResponseBody::SubscribeScope & getSubscribeScope() const { DARABONBA_PTR_GET_CONST(subscribeScope_, GetSubscribedCalendarResponseBody::SubscribeScope) };
    inline GetSubscribedCalendarResponseBody::SubscribeScope getSubscribeScope() { DARABONBA_PTR_GET(subscribeScope_, GetSubscribedCalendarResponseBody::SubscribeScope) };
    inline GetSubscribedCalendarResponseBody& setSubscribeScope(const GetSubscribedCalendarResponseBody::SubscribeScope & subscribeScope) { DARABONBA_PTR_SET_VALUE(subscribeScope_, subscribeScope) };
    inline GetSubscribedCalendarResponseBody& setSubscribeScope(GetSubscribedCalendarResponseBody::SubscribeScope && subscribeScope) { DARABONBA_PTR_SET_RVALUE(subscribeScope_, subscribeScope) };


  protected:
    shared_ptr<string> author_ {};
    shared_ptr<string> calendarId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<string>> managers_ {};
    shared_ptr<string> name_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSubscribedCalendarResponseBody::SubscribeScope> subscribeScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
