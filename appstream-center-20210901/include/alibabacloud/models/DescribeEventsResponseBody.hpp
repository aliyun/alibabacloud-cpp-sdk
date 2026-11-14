// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
    class EventList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventList& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(MemberEniIp, memberEniIp_);
        DARABONBA_PTR_TO_JSON(OccurredTime, occurredTime_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, EventList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
        DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(MemberEniIp, memberEniIp_);
        DARABONBA_PTR_FROM_JSON(OccurredTime, occurredTime_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      EventList() = default ;
      EventList(const EventList &) = default ;
      EventList(EventList &&) = default ;
      EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventList() = default ;
      EventList& operator=(const EventList &) = default ;
      EventList& operator=(EventList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->detailInfo_ == nullptr && this->eventId_ == nullptr && this->eventType_ == nullptr && this->memberEniIp_ == nullptr
        && this->occurredTime_ == nullptr && this->officeSiteId_ == nullptr && this->productType_ == nullptr && this->userId_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline EventList& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceGroupName Field Functions 
      bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
      void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
      inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
      inline EventList& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


      // detailInfo Field Functions 
      bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
      void deleteDetailInfo() { this->detailInfo_ = nullptr;};
      inline string getDetailInfo() const { DARABONBA_PTR_GET_DEFAULT(detailInfo_, "") };
      inline EventList& setDetailInfo(string detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline EventList& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline EventList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // memberEniIp Field Functions 
      bool hasMemberEniIp() const { return this->memberEniIp_ != nullptr;};
      void deleteMemberEniIp() { this->memberEniIp_ = nullptr;};
      inline string getMemberEniIp() const { DARABONBA_PTR_GET_DEFAULT(memberEniIp_, "") };
      inline EventList& setMemberEniIp(string memberEniIp) { DARABONBA_PTR_SET_VALUE(memberEniIp_, memberEniIp) };


      // occurredTime Field Functions 
      bool hasOccurredTime() const { return this->occurredTime_ != nullptr;};
      void deleteOccurredTime() { this->occurredTime_ = nullptr;};
      inline string getOccurredTime() const { DARABONBA_PTR_GET_DEFAULT(occurredTime_, "") };
      inline EventList& setOccurredTime(string occurredTime) { DARABONBA_PTR_SET_VALUE(occurredTime_, occurredTime) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline EventList& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline EventList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline EventList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the delivery group associated with the event. This field may be empty if the event is not associated with a delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The name of the delivery group associated with the event. This field may be empty if the event is not associated with a delivery group.
      shared_ptr<string> appInstanceGroupName_ {};
      // The event detail text. The content varies with `EventType` and may be empty. For example, a session release event may return JSON text that describes the release reason.
      shared_ptr<string> detailInfo_ {};
      // The unique identifier of the event.
      shared_ptr<string> eventId_ {};
      // The event type identifier. Different products may return different values. You can use this value for subsequent exact filtering.
      shared_ptr<string> eventType_ {};
      // The private IP address of the member ENI of the cloud resource associated with the event. This field may be empty if it is not applicable.
      shared_ptr<string> memberEniIp_ {};
      // The time when the event occurred. Format: `yyyy-MM-dd HH:mm:ss`. Time zone: UTC+8 (Asia/Shanghai).
      shared_ptr<string> occurredTime_ {};
      // The ID of the office network associated with the event. This field may be empty if it is not applicable.
      shared_ptr<string> officeSiteId_ {};
      // The product type to which the event belongs. This field is an open string and may be extended as supported event sources expand. Callers should not restrict the value to the products currently listed in the `ProductType` request parameter.
      shared_ptr<string> productType_ {};
      // The ID of the end user who generated the event. This field may be empty if the event is not associated with an end user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->eventList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<DescribeEventsResponseBody::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<DescribeEventsResponseBody::EventList>) };
    inline vector<DescribeEventsResponseBody::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<DescribeEventsResponseBody::EventList>) };
    inline DescribeEventsResponseBody& setEventList(const vector<DescribeEventsResponseBody::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline DescribeEventsResponseBody& setEventList(vector<DescribeEventsResponseBody::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeEventsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of events on the current page, returned in descending order of the event log time.
    shared_ptr<vector<DescribeEventsResponseBody::EventList>> eventList_ {};
    // A compatibility field. The current version does not set this field. Do not rely on its value.
    shared_ptr<int32_t> maxResults_ {};
    // A compatibility field. The current version does not generate a next page token. Do not use this field for pagination.
    shared_ptr<string> nextToken_ {};
    // The page number corresponding to the current response.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of events per page used in the current response.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
    // The total number of events that meet all filter conditions within the 30-day retrievable window. Unit: records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
