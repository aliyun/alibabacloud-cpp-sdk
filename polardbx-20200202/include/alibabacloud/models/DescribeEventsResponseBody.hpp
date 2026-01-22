// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventItems, eventItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventItems, eventItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody(DescribeEventsResponseBody &&) = default ;
    DescribeEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody& operator=(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody& operator=(DescribeEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventItems& obj) { 
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
      friend void from_json(const Darabonba::Json& j, EventItems& obj) { 
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
      EventItems() = default ;
      EventItems(const EventItems &) = default ;
      EventItems(EventItems &&) = default ;
      EventItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventItems() = default ;
      EventItems& operator=(const EventItems &) = default ;
      EventItems& operator=(EventItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventId_ == nullptr
        && this->eventName_ == nullptr && this->eventPayload_ == nullptr && this->eventReason_ == nullptr && this->eventRecordTime_ == nullptr && this->eventTime_ == nullptr
        && this->eventType_ == nullptr && this->eventUserType_ == nullptr && this->regionId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
      inline EventItems& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline EventItems& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventPayload Field Functions 
      bool hasEventPayload() const { return this->eventPayload_ != nullptr;};
      void deleteEventPayload() { this->eventPayload_ = nullptr;};
      inline string getEventPayload() const { DARABONBA_PTR_GET_DEFAULT(eventPayload_, "") };
      inline EventItems& setEventPayload(string eventPayload) { DARABONBA_PTR_SET_VALUE(eventPayload_, eventPayload) };


      // eventReason Field Functions 
      bool hasEventReason() const { return this->eventReason_ != nullptr;};
      void deleteEventReason() { this->eventReason_ = nullptr;};
      inline string getEventReason() const { DARABONBA_PTR_GET_DEFAULT(eventReason_, "") };
      inline EventItems& setEventReason(string eventReason) { DARABONBA_PTR_SET_VALUE(eventReason_, eventReason) };


      // eventRecordTime Field Functions 
      bool hasEventRecordTime() const { return this->eventRecordTime_ != nullptr;};
      void deleteEventRecordTime() { this->eventRecordTime_ = nullptr;};
      inline string getEventRecordTime() const { DARABONBA_PTR_GET_DEFAULT(eventRecordTime_, "") };
      inline EventItems& setEventRecordTime(string eventRecordTime) { DARABONBA_PTR_SET_VALUE(eventRecordTime_, eventRecordTime) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
      inline EventItems& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline EventItems& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // eventUserType Field Functions 
      bool hasEventUserType() const { return this->eventUserType_ != nullptr;};
      void deleteEventUserType() { this->eventUserType_ = nullptr;};
      inline string getEventUserType() const { DARABONBA_PTR_GET_DEFAULT(eventUserType_, "") };
      inline EventItems& setEventUserType(string eventUserType) { DARABONBA_PTR_SET_VALUE(eventUserType_, eventUserType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline EventItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline EventItems& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline EventItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      shared_ptr<int64_t> eventId_ {};
      shared_ptr<string> eventName_ {};
      shared_ptr<string> eventPayload_ {};
      shared_ptr<string> eventReason_ {};
      shared_ptr<string> eventRecordTime_ {};
      shared_ptr<string> eventTime_ {};
      shared_ptr<string> eventType_ {};
      shared_ptr<string> eventUserType_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->eventItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // eventItems Field Functions 
    bool hasEventItems() const { return this->eventItems_ != nullptr;};
    void deleteEventItems() { this->eventItems_ = nullptr;};
    inline const vector<DescribeEventsResponseBody::EventItems> & getEventItems() const { DARABONBA_PTR_GET_CONST(eventItems_, vector<DescribeEventsResponseBody::EventItems>) };
    inline vector<DescribeEventsResponseBody::EventItems> getEventItems() { DARABONBA_PTR_GET(eventItems_, vector<DescribeEventsResponseBody::EventItems>) };
    inline DescribeEventsResponseBody& setEventItems(const vector<DescribeEventsResponseBody::EventItems> & eventItems) { DARABONBA_PTR_SET_VALUE(eventItems_, eventItems) };
    inline DescribeEventsResponseBody& setEventItems(vector<DescribeEventsResponseBody::EventItems> && eventItems) { DARABONBA_PTR_SET_RVALUE(eventItems_, eventItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeEventsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeEventsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeEventsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<vector<DescribeEventsResponseBody::EventItems>> eventItems_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
