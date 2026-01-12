// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeEventsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventCodeCounts, eventCodeCounts_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCodeCounts, eventCodeCounts_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeEventsListResponseBody() = default ;
    DescribeEventsListResponseBody(const DescribeEventsListResponseBody &) = default ;
    DescribeEventsListResponseBody(DescribeEventsListResponseBody &&) = default ;
    DescribeEventsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsListResponseBody() = default ;
    DescribeEventsListResponseBody& operator=(const DescribeEventsListResponseBody &) = default ;
    DescribeEventsListResponseBody& operator=(DescribeEventsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_TO_JSON(EventTimeList, eventTimeList_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
        DARABONBA_PTR_FROM_JSON(EventTimeList, eventTimeList_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventStatus_ == nullptr && this->eventTimeList_ == nullptr && this->instanceDescription_ == nullptr && this->instanceId_ == nullptr && this->recoveryTime_ == nullptr
        && this->regionId_ == nullptr; };
      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline Events& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventStatus Field Functions 
      bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
      void deleteEventStatus() { this->eventStatus_ = nullptr;};
      inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
      inline Events& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


      // eventTimeList Field Functions 
      bool hasEventTimeList() const { return this->eventTimeList_ != nullptr;};
      void deleteEventTimeList() { this->eventTimeList_ = nullptr;};
      inline const vector<string> & getEventTimeList() const { DARABONBA_PTR_GET_CONST(eventTimeList_, vector<string>) };
      inline vector<string> getEventTimeList() { DARABONBA_PTR_GET(eventTimeList_, vector<string>) };
      inline Events& setEventTimeList(const vector<string> & eventTimeList) { DARABONBA_PTR_SET_VALUE(eventTimeList_, eventTimeList) };
      inline Events& setEventTimeList(vector<string> && eventTimeList) { DARABONBA_PTR_SET_RVALUE(eventTimeList_, eventTimeList) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Events& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Events& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // recoveryTime Field Functions 
      bool hasRecoveryTime() const { return this->recoveryTime_ != nullptr;};
      void deleteRecoveryTime() { this->recoveryTime_ = nullptr;};
      inline string getRecoveryTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryTime_, "") };
      inline Events& setRecoveryTime(string recoveryTime) { DARABONBA_PTR_SET_VALUE(recoveryTime_, recoveryTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Events& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The event code.
      shared_ptr<string> eventCode_ {};
      // The state of the event.
      shared_ptr<string> eventStatus_ {};
      // The event.
      shared_ptr<vector<string>> eventTimeList_ {};
      // The description of the instance.
      shared_ptr<string> instanceDescription_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The recovery time.
      shared_ptr<string> recoveryTime_ {};
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->eventCodeCounts_ == nullptr
        && this->events_ == nullptr && this->pageCount_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->totalPages_ == nullptr; };
    // eventCodeCounts Field Functions 
    bool hasEventCodeCounts() const { return this->eventCodeCounts_ != nullptr;};
    void deleteEventCodeCounts() { this->eventCodeCounts_ = nullptr;};
    inline string getEventCodeCounts() const { DARABONBA_PTR_GET_DEFAULT(eventCodeCounts_, "") };
    inline DescribeEventsListResponseBody& setEventCodeCounts(string eventCodeCounts) { DARABONBA_PTR_SET_VALUE(eventCodeCounts_, eventCodeCounts) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<DescribeEventsListResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<DescribeEventsListResponseBody::Events>) };
    inline vector<DescribeEventsListResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<DescribeEventsListResponseBody::Events>) };
    inline DescribeEventsListResponseBody& setEvents(const vector<DescribeEventsListResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline DescribeEventsListResponseBody& setEvents(vector<DescribeEventsListResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeEventsListResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeEventsListResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeEventsListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeEventsListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
    inline DescribeEventsListResponseBody& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The total number of events.
    shared_ptr<string> eventCodeCounts_ {};
    // The information about the events.
    shared_ptr<vector<DescribeEventsListResponseBody::Events>> events_ {};
    // The total number of pages.
    shared_ptr<int64_t> pageCount_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The number of entries per page.
    shared_ptr<int64_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
