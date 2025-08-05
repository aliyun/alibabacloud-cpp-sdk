// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEDEVENTSRESPONSEBODYDATAEVENTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEDEVENTSRESPONSEBODYDATAEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryTracedEventsResponseBodyDataEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTracedEventsResponseBodyDataEvents& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventReceivedTime, eventReceivedTime_);
      DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTracedEventsResponseBodyDataEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventReceivedTime, eventReceivedTime_);
      DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    QueryTracedEventsResponseBodyDataEvents() = default ;
    QueryTracedEventsResponseBodyDataEvents(const QueryTracedEventsResponseBodyDataEvents &) = default ;
    QueryTracedEventsResponseBodyDataEvents(QueryTracedEventsResponseBodyDataEvents &&) = default ;
    QueryTracedEventsResponseBodyDataEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTracedEventsResponseBodyDataEvents() = default ;
    QueryTracedEventsResponseBodyDataEvents& operator=(const QueryTracedEventsResponseBodyDataEvents &) = default ;
    QueryTracedEventsResponseBodyDataEvents& operator=(QueryTracedEventsResponseBodyDataEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->eventId_ != nullptr && this->eventReceivedTime_ != nullptr && this->eventSource_ != nullptr && this->eventType_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline QueryTracedEventsResponseBodyDataEvents& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline QueryTracedEventsResponseBodyDataEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventReceivedTime Field Functions 
    bool hasEventReceivedTime() const { return this->eventReceivedTime_ != nullptr;};
    void deleteEventReceivedTime() { this->eventReceivedTime_ = nullptr;};
    inline int64_t eventReceivedTime() const { DARABONBA_PTR_GET_DEFAULT(eventReceivedTime_, 0L) };
    inline QueryTracedEventsResponseBodyDataEvents& setEventReceivedTime(int64_t eventReceivedTime) { DARABONBA_PTR_SET_VALUE(eventReceivedTime_, eventReceivedTime) };


    // eventSource Field Functions 
    bool hasEventSource() const { return this->eventSource_ != nullptr;};
    void deleteEventSource() { this->eventSource_ = nullptr;};
    inline string eventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
    inline QueryTracedEventsResponseBodyDataEvents& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline QueryTracedEventsResponseBodyDataEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The time when the event was delivered to the event bus.
    std::shared_ptr<int64_t> eventReceivedTime_ = nullptr;
    // The name of the event source.
    std::shared_ptr<string> eventSource_ = nullptr;
    // The event type.
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
