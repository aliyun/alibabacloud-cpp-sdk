// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MemberEniIp, memberEniIp_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MemberEniIp, memberEniIp_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeEventsRequest() = default ;
    DescribeEventsRequest(const DescribeEventsRequest &) = default ;
    DescribeEventsRequest(DescribeEventsRequest &&) = default ;
    DescribeEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsRequest() = default ;
    DescribeEventsRequest& operator=(const DescribeEventsRequest &) = default ;
    DescribeEventsRequest& operator=(DescribeEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->appInstanceId_ == nullptr && this->bizRegionId_ == nullptr && this->endTime_ == nullptr && this->eventId_ == nullptr
        && this->eventType_ == nullptr && this->maxResults_ == nullptr && this->memberEniIp_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr && this->startTime_ == nullptr && this->userId_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline DescribeEventsRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline DescribeEventsRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline DescribeEventsRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeEventsRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeEventsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memberEniIp Field Functions 
    bool hasMemberEniIp() const { return this->memberEniIp_ != nullptr;};
    void deleteMemberEniIp() { this->memberEniIp_ = nullptr;};
    inline string getMemberEniIp() const { DARABONBA_PTR_GET_DEFAULT(memberEniIp_, "") };
    inline DescribeEventsRequest& setMemberEniIp(string memberEniIp) { DARABONBA_PTR_SET_VALUE(memberEniIp_, memberEniIp) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeEventsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEventsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeEventsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeEventsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The delivery group ID, which is used to filter events of the delivery group. If this parameter is not specified, events are not filtered by delivery group. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the ID.
    shared_ptr<string> appInstanceGroupId_ {};
    // The delivery group name. If the name contains only letters, digits, underscores, or hyphens, events are filtered by name prefix. If the name contains spaces or other special characters, events are filtered by the exact value. If this parameter is not specified, events are not filtered by name.
    shared_ptr<string> appInstanceGroupName_ {};
    // The application instance ID, which is used to filter events associated with the instance. If this parameter is not specified, events are not filtered by application instance. To obtain this value, first call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the delivery group ID, and then use the ID as `AppInstanceGroupId` to call the [ListAppInstances](~~ListAppInstances~~) operation.
    shared_ptr<string> appInstanceId_ {};
    // The business region ID of the event, which is used to filter events. If this parameter is not specified, events are not filtered by business region. You can call the [ListRegions](~~ListRegions~~) operation to obtain the ID.
    shared_ptr<string> bizRegionId_ {};
    // The end time of the query. **Required**. The format is the same as `StartTime`. We recommend that you always include the time zone offset. The query includes this time, and the end time cannot be earlier than `StartTime`. A time range later than the call time does not generate future events.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The event ID, which is used to query a single event. If this parameter is not specified, events are not filtered by event ID.
    shared_ptr<string> eventId_ {};
    // The event type identifier, which is used to filter events. Different products may generate different event types. This operation does not restrict the value to a fixed enumeration. You should use the `EventList.EventType` value obtained from previous queries as the filter value.
    shared_ptr<string> eventType_ {};
    // A compatibility field. The current version does not read this parameter. Use `PageSize` to control the number of records on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The private IP address of the member elastic network interface (ENI) of the cloud resource, which is used to filter related events. If this parameter is not specified, events are not filtered by IP address.
    shared_ptr<string> memberEniIp_ {};
    // A compatibility field. The current version does not read this parameter and does not support token-based pagination. Use `PageNumber`.
    shared_ptr<string> nextToken_ {};
    // The office network ID, which is used to filter events generated within the office network. If this parameter is not specified, events are not filtered by office network.
    shared_ptr<string> officeSiteId_ {};
    // The page number to query. Pages start from 1. Default value: 1. This parameter is used together with `PageSize`.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of events to return on each page. Default value: 10. The current operation does not declare a fixed upper limit. We recommend that you set this parameter to a reasonable positive integer based on your actual needs.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. The value is case-insensitive. If you specify an unsupported value, the request fails. If this parameter is not specified, events are not filtered by product type. Only the following public product values are supported:
    // 
    // - `CloudApp`: Wuying Cloud Application.
    // - `CloudBrowser`: Cloud Browser.
    // - `WuyingServer`: Enterprise Edition workstation.
    // - `WuyingWorkstation`: Personal Edition Linggou container workstation.
    // - `WuyingWorkstationTeam`: Linggou Team Edition container workstation.
    // - `WuyingWorkstationBusiness`: Linggou Dedicated Edition container workstation.
    // - `AndroidCloud`: Cloud Phone.
    // - `AIAgent`: AgentBay (AI agent).
    shared_ptr<string> productType_ {};
    // The start time of the query. **Required**. Use the ISO 8601 format: `yyyy-MM-dd\\"T\\"HH:mm:ss`. You can include three-digit milliseconds and use `Z` or `±HH:mm` to specify the time zone. We recommend that you always include the time zone offset. The query includes this time, and the start time must be earlier than or equal to `EndTime`. The service only retains and retrieves events that occurred within 30 days before the call time.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The end user ID, which is used to filter events generated by the user. If this parameter is not specified, events are not filtered by user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
