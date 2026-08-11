// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAPPRISKEVENTBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAPPRISKEVENTBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListAiAppRiskEventByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiAppRiskEventByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiAppRiskEventByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAiAppRiskEventByPageResponseBody() = default ;
    ListAiAppRiskEventByPageResponseBody(const ListAiAppRiskEventByPageResponseBody &) = default ;
    ListAiAppRiskEventByPageResponseBody(ListAiAppRiskEventByPageResponseBody &&) = default ;
    ListAiAppRiskEventByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiAppRiskEventByPageResponseBody() = default ;
    ListAiAppRiskEventByPageResponseBody& operator=(const ListAiAppRiskEventByPageResponseBody &) = default ;
    ListAiAppRiskEventByPageResponseBody& operator=(ListAiAppRiskEventByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(EventDesc, eventDesc_);
        DARABONBA_PTR_TO_JSON(EventDescEn, eventDescEn_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(LabelDesc, labelDesc_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(EventDesc, eventDesc_);
        DARABONBA_PTR_FROM_JSON(EventDescEn, eventDescEn_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(HandleTime, handleTime_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(LabelDesc, labelDesc_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->channel_ == nullptr && this->endTime_ == nullptr && this->eventCode_ == nullptr && this->eventDesc_ == nullptr
        && this->eventDescEn_ == nullptr && this->eventId_ == nullptr && this->eventName_ == nullptr && this->handleTime_ == nullptr && this->label_ == nullptr
        && this->labelDesc_ == nullptr && this->level_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Items& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Items& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Items& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline Items& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventDesc Field Functions 
      bool hasEventDesc() const { return this->eventDesc_ != nullptr;};
      void deleteEventDesc() { this->eventDesc_ = nullptr;};
      inline string getEventDesc() const { DARABONBA_PTR_GET_DEFAULT(eventDesc_, "") };
      inline Items& setEventDesc(string eventDesc) { DARABONBA_PTR_SET_VALUE(eventDesc_, eventDesc) };


      // eventDescEn Field Functions 
      bool hasEventDescEn() const { return this->eventDescEn_ != nullptr;};
      void deleteEventDescEn() { this->eventDescEn_ = nullptr;};
      inline string getEventDescEn() const { DARABONBA_PTR_GET_DEFAULT(eventDescEn_, "") };
      inline Items& setEventDescEn(string eventDescEn) { DARABONBA_PTR_SET_VALUE(eventDescEn_, eventDescEn) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Items& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Items& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // handleTime Field Functions 
      bool hasHandleTime() const { return this->handleTime_ != nullptr;};
      void deleteHandleTime() { this->handleTime_ = nullptr;};
      inline string getHandleTime() const { DARABONBA_PTR_GET_DEFAULT(handleTime_, "") };
      inline Items& setHandleTime(string handleTime) { DARABONBA_PTR_SET_VALUE(handleTime_, handleTime) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Items& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // labelDesc Field Functions 
      bool hasLabelDesc() const { return this->labelDesc_ != nullptr;};
      void deleteLabelDesc() { this->labelDesc_ = nullptr;};
      inline string getLabelDesc() const { DARABONBA_PTR_GET_DEFAULT(labelDesc_, "") };
      inline Items& setLabelDesc(string labelDesc) { DARABONBA_PTR_SET_VALUE(labelDesc_, labelDesc) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Items& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The unique ID of the AI application.
      shared_ptr<string> appId_ {};
      // The name of the AI application.
      shared_ptr<string> appName_ {};
      // The channel source.
      shared_ptr<string> channel_ {};
      // The end time that indicates when the event was resolved.
      shared_ptr<string> endTime_ {};
      // The event code that identifies the type or category of the event.
      shared_ptr<string> eventCode_ {};
      // The detailed description of the risk event.
      shared_ptr<string> eventDesc_ {};
      // The detailed description of the risk event in English.
      shared_ptr<string> eventDescEn_ {};
      // The event ID that uniquely identifies a risk event.
      shared_ptr<string> eventId_ {};
      // The brief name that describes the risk event.
      shared_ptr<string> eventName_ {};
      // The time when the event was handled.
      shared_ptr<string> handleTime_ {};
      // The label used to mark or categorize the event.
      shared_ptr<string> label_ {};
      // The detailed description of the label.
      shared_ptr<string> labelDesc_ {};
      // The risk level that indicates the severity of the event, such as high, medium, or low.
      shared_ptr<string> level_ {};
      // The start time that indicates when the event occurred.
      shared_ptr<string> startTime_ {};
      // The event status that indicates the current processing state of the event, such as pending or resolved.
      shared_ptr<string> status_ {};
      // The event type that indicates the category of the risk event, such as security or performance.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAiAppRiskEventByPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAiAppRiskEventByPageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAiAppRiskEventByPageResponseBody::Items>) };
    inline vector<ListAiAppRiskEventByPageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAiAppRiskEventByPageResponseBody::Items>) };
    inline ListAiAppRiskEventByPageResponseBody& setItems(const vector<ListAiAppRiskEventByPageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAiAppRiskEventByPageResponseBody& setItems(vector<ListAiAppRiskEventByPageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAiAppRiskEventByPageResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAiAppRiskEventByPageResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAiAppRiskEventByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAiAppRiskEventByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAiAppRiskEventByPageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The returned data.
    shared_ptr<vector<ListAiAppRiskEventByPageResponseBody::Items>> items_ {};
    // The maximum number of results returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An empty value indicates that no more pages exist.
    shared_ptr<string> nextToken_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID assigned by the backend to uniquely identify the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
