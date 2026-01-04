// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeHistoryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHistoryEventsResponseBody() = default ;
    DescribeHistoryEventsResponseBody(const DescribeHistoryEventsResponseBody &) = default ;
    DescribeHistoryEventsResponseBody(DescribeHistoryEventsResponseBody &&) = default ;
    DescribeHistoryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsResponseBody() = default ;
    DescribeHistoryEventsResponseBody& operator=(const DescribeHistoryEventsResponseBody &) = default ;
    DescribeHistoryEventsResponseBody& operator=(DescribeHistoryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(ExtendedAttribute, extendedAttribute_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(ExtendedAttribute, extendedAttribute_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
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
      virtual bool empty() const override { return this->eventId_ == nullptr
        && this->eventLevel_ == nullptr && this->eventStatus_ == nullptr && this->eventType_ == nullptr && this->extendedAttribute_ == nullptr && this->notBefore_ == nullptr
        && this->publishTime_ == nullptr && this->reason_ == nullptr && this->resourceId_ == nullptr; };
      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Events& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline Events& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventStatus Field Functions 
      bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
      void deleteEventStatus() { this->eventStatus_ = nullptr;};
      inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
      inline Events& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Events& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // extendedAttribute Field Functions 
      bool hasExtendedAttribute() const { return this->extendedAttribute_ != nullptr;};
      void deleteExtendedAttribute() { this->extendedAttribute_ = nullptr;};
      inline string getExtendedAttribute() const { DARABONBA_PTR_GET_DEFAULT(extendedAttribute_, "") };
      inline Events& setExtendedAttribute(string extendedAttribute) { DARABONBA_PTR_SET_VALUE(extendedAttribute_, extendedAttribute) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
      inline Events& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline int64_t getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
      inline Events& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Events& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Events& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // The ID of the event.
      shared_ptr<string> eventId_ {};
      // The level of the specific event. Valid values:
      // 
      // *   CRITICAL
      // *   WARN
      // *   INFO
      shared_ptr<string> eventLevel_ {};
      // The status of the event. Valid values:
      // 
      // *   Inquiring
      // *   Scheduled
      // *   Executing
      // *   Executed
      // *   Failed
      // *   Canceled
      // *   Avoided
      shared_ptr<string> eventStatus_ {};
      // The type of the event. Description:
      // 
      // *   Instance:SystemFailure.Redeploy: The instance is redeployed due to system issues.
      // *   Instance:SystemFailure.Reboot: The instance is restarted due to a system error.
      // *   Instance:RegionNetworkDown: The node network is interrupted.
      // *   Disk:Stalled: The disk performance is impaired.
      // *   EnsRegion:NetworkMigration: The instance is migrated due to a system error.
      // *   IP:SafeRisk: IP alerts.
      // *   IP:SafeBan: IP blocking.
      // *   Instance:SystemUpgrade.Migrate: The instance needs to be migrated due to underlying upgrades.
      // *   Instance:SystemMaintenance.Redeploy: The instance is redeployed due to system maintenance.
      shared_ptr<string> eventType_ {};
      // The extended attributes.
      shared_ptr<string> extendedAttribute_ {};
      // The scheduled execution time of the event in milliseconds.
      shared_ptr<int64_t> notBefore_ {};
      // The release time in milliseconds.
      shared_ptr<int64_t> publishTime_ {};
      // The event cause.
      shared_ptr<string> reason_ {};
      // The ID of the associated resources.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeHistoryEventsResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeHistoryEventsResponseBody::Events>) };
    inline vector<DescribeHistoryEventsResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<DescribeHistoryEventsResponseBody::Events>) };
    inline DescribeHistoryEventsResponseBody& setEvents(const vector<DescribeHistoryEventsResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeHistoryEventsResponseBody& setEvents(vector<DescribeHistoryEventsResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHistoryEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHistoryEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHistoryEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried events.
    shared_ptr<vector<DescribeHistoryEventsResponseBody::Events>> events_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
