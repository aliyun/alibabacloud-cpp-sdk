// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEDEVENTBYEVENTIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEDEVENTBYEVENTIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryTracedEventByEventIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTracedEventByEventIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTracedEventByEventIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
    };
    QueryTracedEventByEventIdRequest() = default ;
    QueryTracedEventByEventIdRequest(const QueryTracedEventByEventIdRequest &) = default ;
    QueryTracedEventByEventIdRequest(QueryTracedEventByEventIdRequest &&) = default ;
    QueryTracedEventByEventIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTracedEventByEventIdRequest() = default ;
    QueryTracedEventByEventIdRequest& operator=(const QueryTracedEventByEventIdRequest &) = default ;
    QueryTracedEventByEventIdRequest& operator=(QueryTracedEventByEventIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->eventId_ != nullptr && this->eventSource_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline QueryTracedEventByEventIdRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline QueryTracedEventByEventIdRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventSource Field Functions 
    bool hasEventSource() const { return this->eventSource_ != nullptr;};
    void deleteEventSource() { this->eventSource_ = nullptr;};
    inline string eventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
    inline QueryTracedEventByEventIdRequest& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The event ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventId_ = nullptr;
    // The name of the event source.
    std::shared_ptr<string> eventSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
