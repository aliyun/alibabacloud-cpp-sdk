// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedEventsResponseBody() = default ;
    GetAccessKeyLastUsedEventsResponseBody(const GetAccessKeyLastUsedEventsResponseBody &) = default ;
    GetAccessKeyLastUsedEventsResponseBody(GetAccessKeyLastUsedEventsResponseBody &&) = default ;
    GetAccessKeyLastUsedEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedEventsResponseBody() = default ;
    GetAccessKeyLastUsedEventsResponseBody& operator=(const GetAccessKeyLastUsedEventsResponseBody &) = default ;
    GetAccessKeyLastUsedEventsResponseBody& operator=(GetAccessKeyLastUsedEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->eventName_ == nullptr && this->source_ == nullptr && this->usedTimestamp_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Events& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Events& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Events& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // usedTimestamp Field Functions 
      bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
      void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
      inline int64_t getUsedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
      inline Events& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


    protected:
      // An array that consists of the details about the event.
      shared_ptr<string> detail_ {};
      // The name of the event.
      shared_ptr<string> eventName_ {};
      // The event source.
      shared_ptr<string> source_ {};
      // The timestamp when the event was generated.
      shared_ptr<int64_t> usedTimestamp_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<GetAccessKeyLastUsedEventsResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<GetAccessKeyLastUsedEventsResponseBody::Events>) };
    inline vector<GetAccessKeyLastUsedEventsResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<GetAccessKeyLastUsedEventsResponseBody::Events>) };
    inline GetAccessKeyLastUsedEventsResponseBody& setEvents(const vector<GetAccessKeyLastUsedEventsResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetAccessKeyLastUsedEventsResponseBody& setEvents(vector<GetAccessKeyLastUsedEventsResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAccessKeyLastUsedEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of returned events.
    // 
    // This parameter is required.
    shared_ptr<vector<GetAccessKeyLastUsedEventsResponseBody::Events>> events_ {};
    // The token that determines the start point of the query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
