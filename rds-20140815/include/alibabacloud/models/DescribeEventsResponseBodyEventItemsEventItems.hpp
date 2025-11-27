// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTITEMSEVENTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTITEMSEVENTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeEventsResponseBodyEventItemsEventItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBodyEventItemsEventItems& obj) { 
      DARABONBA_PTR_TO_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventPayload, eventPayload_);
      DARABONBA_PTR_TO_JSON(EventReason, eventReason_);
      DARABONBA_PTR_TO_JSON(EventRecordTime, eventRecordTime_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(EventUserType, eventUserType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBodyEventItemsEventItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventPayload, eventPayload_);
      DARABONBA_PTR_FROM_JSON(EventReason, eventReason_);
      DARABONBA_PTR_FROM_JSON(EventRecordTime, eventRecordTime_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(EventUserType, eventUserType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeEventsResponseBodyEventItemsEventItems() = default ;
    DescribeEventsResponseBodyEventItemsEventItems(const DescribeEventsResponseBodyEventItemsEventItems &) = default ;
    DescribeEventsResponseBodyEventItemsEventItems(DescribeEventsResponseBodyEventItemsEventItems &&) = default ;
    DescribeEventsResponseBodyEventItemsEventItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBodyEventItemsEventItems() = default ;
    DescribeEventsResponseBodyEventItemsEventItems& operator=(const DescribeEventsResponseBodyEventItemsEventItems &) = default ;
    DescribeEventsResponseBodyEventItemsEventItems& operator=(DescribeEventsResponseBodyEventItemsEventItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerUid_ == nullptr
        && return this->eventId_ == nullptr && return this->eventName_ == nullptr && return this->eventPayload_ == nullptr && return this->eventReason_ == nullptr && return this->eventRecordTime_ == nullptr
        && return this->eventTime_ == nullptr && return this->eventType_ == nullptr && return this->eventUserType_ == nullptr && return this->regionId_ == nullptr && return this->resourceName_ == nullptr
        && return this->resourceType_ == nullptr; };
    // callerUid Field Functions 
    bool hasCallerUid() const { return this->callerUid_ != nullptr;};
    void deleteCallerUid() { this->callerUid_ = nullptr;};
    inline int64_t callerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, 0L) };
    inline DescribeEventsResponseBodyEventItemsEventItems& setCallerUid(int64_t callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int32_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0) };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventId(int32_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventPayload Field Functions 
    bool hasEventPayload() const { return this->eventPayload_ != nullptr;};
    void deleteEventPayload() { this->eventPayload_ = nullptr;};
    inline string eventPayload() const { DARABONBA_PTR_GET_DEFAULT(eventPayload_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventPayload(string eventPayload) { DARABONBA_PTR_SET_VALUE(eventPayload_, eventPayload) };


    // eventReason Field Functions 
    bool hasEventReason() const { return this->eventReason_ != nullptr;};
    void deleteEventReason() { this->eventReason_ = nullptr;};
    inline string eventReason() const { DARABONBA_PTR_GET_DEFAULT(eventReason_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventReason(string eventReason) { DARABONBA_PTR_SET_VALUE(eventReason_, eventReason) };


    // eventRecordTime Field Functions 
    bool hasEventRecordTime() const { return this->eventRecordTime_ != nullptr;};
    void deleteEventRecordTime() { this->eventRecordTime_ = nullptr;};
    inline string eventRecordTime() const { DARABONBA_PTR_GET_DEFAULT(eventRecordTime_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventRecordTime(string eventRecordTime) { DARABONBA_PTR_SET_VALUE(eventRecordTime_, eventRecordTime) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // eventUserType Field Functions 
    bool hasEventUserType() const { return this->eventUserType_ != nullptr;};
    void deleteEventUserType() { this->eventUserType_ = nullptr;};
    inline string eventUserType() const { DARABONBA_PTR_GET_DEFAULT(eventUserType_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setEventUserType(string eventUserType) { DARABONBA_PTR_SET_VALUE(eventUserType_, eventUserType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeEventsResponseBodyEventItemsEventItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the user who executed the event.
    std::shared_ptr<int64_t> callerUid_ = nullptr;
    // The event ID.
    std::shared_ptr<int32_t> eventId_ = nullptr;
    // The event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // The request or context parameters of the event.
    std::shared_ptr<string> eventPayload_ = nullptr;
    // The source of the event.
    std::shared_ptr<string> eventReason_ = nullptr;
    // The time when the event was recorded. The time is slightly later than the time the event occurred.
    std::shared_ptr<string> eventRecordTime_ = nullptr;
    // The time when the event occurred.
    std::shared_ptr<string> eventTime_ = nullptr;
    // The event type.
    std::shared_ptr<string> eventType_ = nullptr;
    // The type of the user who executed the event.
    std::shared_ptr<string> eventUserType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the resource associated with the event. Only instance IDs are supported for this parameter.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource associated with the event. Only instances are supported for this parameter.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
