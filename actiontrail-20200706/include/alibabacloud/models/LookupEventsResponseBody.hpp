// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class LookupEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, LookupEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    LookupEventsResponseBody() = default ;
    LookupEventsResponseBody(const LookupEventsResponseBody &) = default ;
    LookupEventsResponseBody(LookupEventsResponseBody &&) = default ;
    LookupEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupEventsResponseBody() = default ;
    LookupEventsResponseBody& operator=(const LookupEventsResponseBody &) = default ;
    LookupEventsResponseBody& operator=(LookupEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->events_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LookupEventsResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<Darabonba::Json> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> events() { DARABONBA_PTR_GET(events_, vector<Darabonba::Json>) };
    inline LookupEventsResponseBody& setEvents(const vector<Darabonba::Json> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline LookupEventsResponseBody& setEvents(vector<Darabonba::Json> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LookupEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LookupEventsResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range when event details were queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The returned event details.
    // 
    // For more information about the fields in an event log, see [ActionTrail event log reference](https://help.aliyun.com/document_detail/28819.html).
    std::shared_ptr<vector<Darabonba::Json>> events_ = nullptr;
    // The token used to return the next page of query results.
    // 
    // > This parameter is not returned if no more results are to be returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range when event details were queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
