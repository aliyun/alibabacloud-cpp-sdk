// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONTRACKEVENTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONTRACKEVENTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListActionTrackEventTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionTrackEventTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionTrackEventTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListActionTrackEventTypesResponseBody() = default ;
    ListActionTrackEventTypesResponseBody(const ListActionTrackEventTypesResponseBody &) = default ;
    ListActionTrackEventTypesResponseBody(ListActionTrackEventTypesResponseBody &&) = default ;
    ListActionTrackEventTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionTrackEventTypesResponseBody() = default ;
    ListActionTrackEventTypesResponseBody& operator=(const ListActionTrackEventTypesResponseBody &) = default ;
    ListActionTrackEventTypesResponseBody& operator=(ListActionTrackEventTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventTypes& obj) { 
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
      };
      friend void from_json(const Darabonba::Json& j, EventTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      };
      EventTypes() = default ;
      EventTypes(const EventTypes &) = default ;
      EventTypes(EventTypes &&) = default ;
      EventTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventTypes() = default ;
      EventTypes& operator=(const EventTypes &) = default ;
      EventTypes& operator=(EventTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventType_ == nullptr; };
      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline EventTypes& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    protected:
      shared_ptr<string> eventType_ {};
    };

    virtual bool empty() const override { return this->eventTypes_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<ListActionTrackEventTypesResponseBody::EventTypes> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<ListActionTrackEventTypesResponseBody::EventTypes>) };
    inline vector<ListActionTrackEventTypesResponseBody::EventTypes> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<ListActionTrackEventTypesResponseBody::EventTypes>) };
    inline ListActionTrackEventTypesResponseBody& setEventTypes(const vector<ListActionTrackEventTypesResponseBody::EventTypes> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline ListActionTrackEventTypesResponseBody& setEventTypes(vector<ListActionTrackEventTypesResponseBody::EventTypes> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListActionTrackEventTypesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionTrackEventTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListActionTrackEventTypesResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionTrackEventTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListActionTrackEventTypesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListActionTrackEventTypesResponseBody::EventTypes>> eventTypes_ {};
    // 分页查询时每页行数。
    shared_ptr<int64_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    shared_ptr<string> previousToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
