// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class GetExecutionHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecutionHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecutionHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExecutionHistoryResponseBody() = default ;
    GetExecutionHistoryResponseBody(const GetExecutionHistoryResponseBody &) = default ;
    GetExecutionHistoryResponseBody(GetExecutionHistoryResponseBody &&) = default ;
    GetExecutionHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecutionHistoryResponseBody() = default ;
    GetExecutionHistoryResponseBody& operator=(const GetExecutionHistoryResponseBody &) = default ;
    GetExecutionHistoryResponseBody& operator=(GetExecutionHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(EventDetail, eventDetail_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(ScheduleEventId, scheduleEventId_);
        DARABONBA_PTR_TO_JSON(StepName, stepName_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(EventDetail, eventDetail_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(ScheduleEventId, scheduleEventId_);
        DARABONBA_PTR_FROM_JSON(StepName, stepName_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->eventDetail_ == nullptr
        && this->eventId_ == nullptr && this->scheduleEventId_ == nullptr && this->stepName_ == nullptr && this->time_ == nullptr && this->type_ == nullptr; };
      // eventDetail Field Functions 
      bool hasEventDetail() const { return this->eventDetail_ != nullptr;};
      void deleteEventDetail() { this->eventDetail_ = nullptr;};
      inline string getEventDetail() const { DARABONBA_PTR_GET_DEFAULT(eventDetail_, "") };
      inline Events& setEventDetail(string eventDetail) { DARABONBA_PTR_SET_VALUE(eventDetail_, eventDetail) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
      inline Events& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // scheduleEventId Field Functions 
      bool hasScheduleEventId() const { return this->scheduleEventId_ != nullptr;};
      void deleteScheduleEventId() { this->scheduleEventId_ = nullptr;};
      inline int64_t getScheduleEventId() const { DARABONBA_PTR_GET_DEFAULT(scheduleEventId_, 0L) };
      inline Events& setScheduleEventId(int64_t scheduleEventId) { DARABONBA_PTR_SET_VALUE(scheduleEventId_, scheduleEventId) };


      // stepName Field Functions 
      bool hasStepName() const { return this->stepName_ != nullptr;};
      void deleteStepName() { this->stepName_ = nullptr;};
      inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
      inline Events& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Events& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Events& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The details about the execution step.
      shared_ptr<string> eventDetail_ {};
      // The ID of the execution step.
      shared_ptr<int64_t> eventId_ {};
      // The ID of the scheduling step.
      shared_ptr<int64_t> scheduleEventId_ {};
      // The name of the execution step.
      shared_ptr<string> stepName_ {};
      // The time when the event was updated.
      shared_ptr<string> time_ {};
      // The type of the execution step. Valid values:
      // 
      // *   **StepEntered**
      // *   **StepStarted**
      // *   **StepSucceeded**
      // *   **StepFailed**
      // *   **StepExited**
      // *   **BranchEntered**
      // *   **BranchExited**
      // *   **IterationEntered**
      // *   **IterationExited**
      // *   **TaskScheduled**
      // *   **TaskStarted**
      // *   **TaskSubmitted**
      // *   **TaskSubmitFailed**
      // *   **TaskSucceeded**
      // *   **TaskFailed**
      // *   **TaskTimedOut**
      // *   **ExecutionStarted**
      // *   **ExecutionStopped**
      // *   **ExecutionSucceeded**
      // *   **ExecutionFailed**
      // *   **ExecutionTimedOut**
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<GetExecutionHistoryResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<GetExecutionHistoryResponseBody::Events>) };
    inline vector<GetExecutionHistoryResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<GetExecutionHistoryResponseBody::Events>) };
    inline GetExecutionHistoryResponseBody& setEvents(const vector<GetExecutionHistoryResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetExecutionHistoryResponseBody& setEvents(vector<GetExecutionHistoryResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetExecutionHistoryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExecutionHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The events.
    shared_ptr<vector<GetExecutionHistoryResponseBody::Events>> events_ {};
    // You do not need to specify this parameter for the first request. The returned value of **ScheduleEventId** is used as the token for the next query. No value is returned for the last query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
