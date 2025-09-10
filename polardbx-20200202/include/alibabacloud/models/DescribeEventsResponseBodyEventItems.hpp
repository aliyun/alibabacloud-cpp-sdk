// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeEventsResponseBodyEventItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBodyEventItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBodyEventItems& obj) { 
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
    DescribeEventsResponseBodyEventItems() = default ;
    DescribeEventsResponseBodyEventItems(const DescribeEventsResponseBodyEventItems &) = default ;
    DescribeEventsResponseBodyEventItems(DescribeEventsResponseBodyEventItems &&) = default ;
    DescribeEventsResponseBodyEventItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBodyEventItems() = default ;
    DescribeEventsResponseBodyEventItems& operator=(const DescribeEventsResponseBodyEventItems &) = default ;
    DescribeEventsResponseBodyEventItems& operator=(DescribeEventsResponseBodyEventItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventId_ != nullptr
        && this->eventName_ != nullptr && this->eventPayload_ != nullptr && this->eventReason_ != nullptr && this->eventRecordTime_ != nullptr && this->eventTime_ != nullptr
        && this->eventType_ != nullptr && this->eventUserType_ != nullptr && this->regionId_ != nullptr && this->resourceName_ != nullptr && this->resourceType_ != nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline DescribeEventsResponseBodyEventItems& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEventsResponseBodyEventItems& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventPayload Field Functions 
    bool hasEventPayload() const { return this->eventPayload_ != nullptr;};
    void deleteEventPayload() { this->eventPayload_ = nullptr;};
    inline string eventPayload() const { DARABONBA_PTR_GET_DEFAULT(eventPayload_, "") };
    inline DescribeEventsResponseBodyEventItems& setEventPayload(string eventPayload) { DARABONBA_PTR_SET_VALUE(eventPayload_, eventPayload) };


    // eventReason Field Functions 
    bool hasEventReason() const { return this->eventReason_ != nullptr;};
    void deleteEventReason() { this->eventReason_ = nullptr;};
    inline string eventReason() const { DARABONBA_PTR_GET_DEFAULT(eventReason_, "") };
    inline DescribeEventsResponseBodyEventItems& setEventReason(string eventReason) { DARABONBA_PTR_SET_VALUE(eventReason_, eventReason) };


    // eventRecordTime Field Functions 
    bool hasEventRecordTime() const { return this->eventRecordTime_ != nullptr;};
    void deleteEventRecordTime() { this->eventRecordTime_ = nullptr;};
    inline string eventRecordTime() const { DARABONBA_PTR_GET_DEFAULT(eventRecordTime_, "") };
    inline DescribeEventsResponseBodyEventItems& setEventRecordTime(string eventRecordTime) { DARABONBA_PTR_SET_VALUE(eventRecordTime_, eventRecordTime) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline DescribeEventsResponseBodyEventItems& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEventsResponseBodyEventItems& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // eventUserType Field Functions 
    bool hasEventUserType() const { return this->eventUserType_ != nullptr;};
    void deleteEventUserType() { this->eventUserType_ = nullptr;};
    inline string eventUserType() const { DARABONBA_PTR_GET_DEFAULT(eventUserType_, "") };
    inline DescribeEventsResponseBodyEventItems& setEventUserType(string eventUserType) { DARABONBA_PTR_SET_VALUE(eventUserType_, eventUserType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEventsResponseBodyEventItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeEventsResponseBodyEventItems& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeEventsResponseBodyEventItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<int64_t> eventId_ = nullptr;
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<string> eventPayload_ = nullptr;
    std::shared_ptr<string> eventReason_ = nullptr;
    std::shared_ptr<string> eventRecordTime_ = nullptr;
    std::shared_ptr<string> eventTime_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> eventUserType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
