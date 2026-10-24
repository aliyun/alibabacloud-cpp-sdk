// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILARSECURITYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILARSECURITYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeSimilarSecurityEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarSecurityEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventsResponse, securityEventsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarSecurityEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventsResponse, securityEventsResponse_);
    };
    DescribeSimilarSecurityEventsResponseBody() = default ;
    DescribeSimilarSecurityEventsResponseBody(const DescribeSimilarSecurityEventsResponseBody &) = default ;
    DescribeSimilarSecurityEventsResponseBody(DescribeSimilarSecurityEventsResponseBody &&) = default ;
    DescribeSimilarSecurityEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimilarSecurityEventsResponseBody() = default ;
    DescribeSimilarSecurityEventsResponseBody& operator=(const DescribeSimilarSecurityEventsResponseBody &) = default ;
    DescribeSimilarSecurityEventsResponseBody& operator=(DescribeSimilarSecurityEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityEventsResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventsResponse& obj) { 
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventsResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      SecurityEventsResponse() = default ;
      SecurityEventsResponse(const SecurityEventsResponse &) = default ;
      SecurityEventsResponse(SecurityEventsResponse &&) = default ;
      SecurityEventsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventsResponse() = default ;
      SecurityEventsResponse& operator=(const SecurityEventsResponse &) = default ;
      SecurityEventsResponse& operator=(SecurityEventsResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventType_ == nullptr && this->lastTime_ == nullptr && this->occurrenceTime_ == nullptr && this->securityEventId_ == nullptr && this->uuid_ == nullptr; };
      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline SecurityEventsResponse& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline SecurityEventsResponse& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline SecurityEventsResponse& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // occurrenceTime Field Functions 
      bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
      void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
      inline int64_t getOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, 0L) };
      inline SecurityEventsResponse& setOccurrenceTime(int64_t occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


      // securityEventId Field Functions 
      bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
      void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
      inline int64_t getSecurityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
      inline SecurityEventsResponse& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline SecurityEventsResponse& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The name of the alert event.
      shared_ptr<string> eventName_ {};
      // The type of the alert event.
      shared_ptr<string> eventType_ {};
      // The timestamp when the alert last occurred. Unit: milliseconds.
      shared_ptr<int64_t> lastTime_ {};
      // The timestamp when the alert event first occurred. Unit: milliseconds.
      shared_ptr<int64_t> occurrenceTime_ {};
      // The ID of the alert event.
      shared_ptr<int64_t> securityEventId_ {};
      // The UUID of the terminal or asset affected by the alert event.
      shared_ptr<string> uuid_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The total number of data entries displayed on the current page during a paged query with paging.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page in a paged query with paging.
      shared_ptr<int32_t> currentPage_ {};
      // The number of alerting events displayed on each page in a paged query with paging. Default value: **20**, which indicates that 20 alerting events are displayed per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of queried alert events.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->securityEventsResponse_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSimilarSecurityEventsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSimilarSecurityEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSimilarSecurityEventsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSimilarSecurityEventsResponseBody::PageInfo) };
    inline DescribeSimilarSecurityEventsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSimilarSecurityEventsResponseBody::PageInfo) };
    inline DescribeSimilarSecurityEventsResponseBody& setPageInfo(const DescribeSimilarSecurityEventsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSimilarSecurityEventsResponseBody& setPageInfo(DescribeSimilarSecurityEventsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSimilarSecurityEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventsResponse Field Functions 
    bool hasSecurityEventsResponse() const { return this->securityEventsResponse_ != nullptr;};
    void deleteSecurityEventsResponse() { this->securityEventsResponse_ = nullptr;};
    inline const vector<DescribeSimilarSecurityEventsResponseBody::SecurityEventsResponse> & getSecurityEventsResponse() const { DARABONBA_PTR_GET_CONST(securityEventsResponse_, vector<DescribeSimilarSecurityEventsResponseBody::SecurityEventsResponse>) };
    inline vector<DescribeSimilarSecurityEventsResponseBody::SecurityEventsResponse> getSecurityEventsResponse() { DARABONBA_PTR_GET(securityEventsResponse_, vector<DescribeSimilarSecurityEventsResponseBody::SecurityEventsResponse>) };
    inline DescribeSimilarSecurityEventsResponseBody& setSecurityEventsResponse(const vector<DescribeSimilarSecurityEventsResponseBody::SecurityEventsResponse> & securityEventsResponse) { DARABONBA_PTR_SET_VALUE(securityEventsResponse_, securityEventsResponse) };
    inline DescribeSimilarSecurityEventsResponseBody& setSecurityEventsResponse(vector<DescribeSimilarSecurityEventsResponseBody::SecurityEventsResponse> && securityEventsResponse) { DARABONBA_PTR_SET_RVALUE(securityEventsResponse_, securityEventsResponse) };


  protected:
    // The maximum number of entries to return in a single query. This parameter is reserved for compatibility. The backend currently uses CurrentPage and PageSize for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // The NextToken value returned when the NextToken pagination method is used.
    shared_ptr<string> nextToken_ {};
    // The pagination information of the query results.
    shared_ptr<DescribeSimilarSecurityEventsResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request. The ID is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The list of identical alert events.
    shared_ptr<vector<DescribeSimilarSecurityEventsResponseBody::SecurityEventsResponse>> securityEventsResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
