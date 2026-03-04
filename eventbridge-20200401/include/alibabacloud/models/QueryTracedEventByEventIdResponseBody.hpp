// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEDEVENTBYEVENTIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEDEVENTBYEVENTIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryTracedEventByEventIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTracedEventByEventIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTracedEventByEventIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTracedEventByEventIdResponseBody() = default ;
    QueryTracedEventByEventIdResponseBody(const QueryTracedEventByEventIdResponseBody &) = default ;
    QueryTracedEventByEventIdResponseBody(QueryTracedEventByEventIdResponseBody &&) = default ;
    QueryTracedEventByEventIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTracedEventByEventIdResponseBody() = default ;
    QueryTracedEventByEventIdResponseBody& operator=(const QueryTracedEventByEventIdResponseBody &) = default ;
    QueryTracedEventByEventIdResponseBody& operator=(QueryTracedEventByEventIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Events, events_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Events, events_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Events : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Events& obj) { 
          DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_TO_JSON(EventId, eventId_);
          DARABONBA_PTR_TO_JSON(EventReceivedTime, eventReceivedTime_);
          DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
        };
        friend void from_json(const Darabonba::Json& j, Events& obj) { 
          DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_FROM_JSON(EventId, eventId_);
          DARABONBA_PTR_FROM_JSON(EventReceivedTime, eventReceivedTime_);
          DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
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
        virtual bool empty() const override { return this->eventBusName_ == nullptr
        && this->eventId_ == nullptr && this->eventReceivedTime_ == nullptr && this->eventSource_ == nullptr && this->eventType_ == nullptr; };
        // eventBusName Field Functions 
        bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
        void deleteEventBusName() { this->eventBusName_ = nullptr;};
        inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
        inline Events& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline Events& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // eventReceivedTime Field Functions 
        bool hasEventReceivedTime() const { return this->eventReceivedTime_ != nullptr;};
        void deleteEventReceivedTime() { this->eventReceivedTime_ = nullptr;};
        inline int64_t getEventReceivedTime() const { DARABONBA_PTR_GET_DEFAULT(eventReceivedTime_, 0L) };
        inline Events& setEventReceivedTime(int64_t eventReceivedTime) { DARABONBA_PTR_SET_VALUE(eventReceivedTime_, eventReceivedTime) };


        // eventSource Field Functions 
        bool hasEventSource() const { return this->eventSource_ != nullptr;};
        void deleteEventSource() { this->eventSource_ = nullptr;};
        inline string getEventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
        inline Events& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline Events& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      protected:
        // The name of the event bus.
        shared_ptr<string> eventBusName_ {};
        // The event ID.
        shared_ptr<string> eventId_ {};
        // The time when the event was delivered to the event bus.
        shared_ptr<int64_t> eventReceivedTime_ {};
        // The name of the event source.
        shared_ptr<string> eventSource_ {};
        // The event type.
        shared_ptr<string> eventType_ {};
      };

      virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->total_ == nullptr; };
      // events Field Functions 
      bool hasEvents() const { return this->events_ != nullptr;};
      void deleteEvents() { this->events_ = nullptr;};
      inline const vector<Data::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Data::Events>) };
      inline vector<Data::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<Data::Events>) };
      inline Data& setEvents(const vector<Data::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
      inline Data& setEvents(vector<Data::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The events.
      shared_ptr<vector<Data::Events>> events_ {};
      // If excess return values exist, this parameter is returned.
      shared_ptr<string> nextToken_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTracedEventByEventIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryTracedEventByEventIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryTracedEventByEventIdResponseBody::Data>) };
    inline vector<QueryTracedEventByEventIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryTracedEventByEventIdResponseBody::Data>) };
    inline QueryTracedEventByEventIdResponseBody& setData(const vector<QueryTracedEventByEventIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTracedEventByEventIdResponseBody& setData(vector<QueryTracedEventByEventIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTracedEventByEventIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTracedEventByEventIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTracedEventByEventIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // Success: The request was successful.
    // 
    // Other codes: The request failed. For information about error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The total number of entries returned.
    shared_ptr<vector<QueryTracedEventByEventIdResponseBody::Data>> data_ {};
    // The returned error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. If the operation was successful, the value true is returned.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
