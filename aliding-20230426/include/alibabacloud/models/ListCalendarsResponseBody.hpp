// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODY_HPP_
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
  class ListCalendarsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(response, response_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(response, response_);
    };
    ListCalendarsResponseBody() = default ;
    ListCalendarsResponseBody(const ListCalendarsResponseBody &) = default ;
    ListCalendarsResponseBody(ListCalendarsResponseBody &&) = default ;
    ListCalendarsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsResponseBody() = default ;
    ListCalendarsResponseBody& operator=(const ListCalendarsResponseBody &) = default ;
    ListCalendarsResponseBody& operator=(ListCalendarsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Response : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Response& obj) { 
        DARABONBA_PTR_TO_JSON(Calendars, calendars_);
      };
      friend void from_json(const Darabonba::Json& j, Response& obj) { 
        DARABONBA_PTR_FROM_JSON(Calendars, calendars_);
      };
      Response() = default ;
      Response(const Response &) = default ;
      Response(Response &&) = default ;
      Response(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Response() = default ;
      Response& operator=(const Response &) = default ;
      Response& operator=(Response &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Calendars : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Calendars& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ETag, ETag_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Privilege, privilege_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Calendars& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ETag, ETag_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Calendars() = default ;
        Calendars(const Calendars &) = default ;
        Calendars(Calendars &&) = default ;
        Calendars(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Calendars() = default ;
        Calendars& operator=(const Calendars &) = default ;
        Calendars& operator=(Calendars &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->ETag_ == nullptr && this->id_ == nullptr && this->privilege_ == nullptr && this->summary_ == nullptr && this->timeZone_ == nullptr
        && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Calendars& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ETag Field Functions 
        bool hasETag() const { return this->ETag_ != nullptr;};
        void deleteETag() { this->ETag_ = nullptr;};
        inline string getETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
        inline Calendars& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Calendars& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // privilege Field Functions 
        bool hasPrivilege() const { return this->privilege_ != nullptr;};
        void deletePrivilege() { this->privilege_ = nullptr;};
        inline string getPrivilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
        inline Calendars& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Calendars& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // timeZone Field Functions 
        bool hasTimeZone() const { return this->timeZone_ != nullptr;};
        void deleteTimeZone() { this->timeZone_ = nullptr;};
        inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
        inline Calendars& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Calendars& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> ETag_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> privilege_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<string> timeZone_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->calendars_ == nullptr; };
      // calendars Field Functions 
      bool hasCalendars() const { return this->calendars_ != nullptr;};
      void deleteCalendars() { this->calendars_ = nullptr;};
      inline const vector<Response::Calendars> & getCalendars() const { DARABONBA_PTR_GET_CONST(calendars_, vector<Response::Calendars>) };
      inline vector<Response::Calendars> getCalendars() { DARABONBA_PTR_GET(calendars_, vector<Response::Calendars>) };
      inline Response& setCalendars(const vector<Response::Calendars> & calendars) { DARABONBA_PTR_SET_VALUE(calendars_, calendars) };
      inline Response& setCalendars(vector<Response::Calendars> && calendars) { DARABONBA_PTR_SET_RVALUE(calendars_, calendars) };


    protected:
      shared_ptr<vector<Response::Calendars>> calendars_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->response_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCalendarsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const ListCalendarsResponseBody::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, ListCalendarsResponseBody::Response) };
    inline ListCalendarsResponseBody::Response getResponse() { DARABONBA_PTR_GET(response_, ListCalendarsResponseBody::Response) };
    inline ListCalendarsResponseBody& setResponse(const ListCalendarsResponseBody::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline ListCalendarsResponseBody& setResponse(ListCalendarsResponseBody::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


  protected:
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<ListCalendarsResponseBody::Response> response_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
