// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPINSIGHTEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPINSIGHTEVENTSRESPONSEBODY_HPP_
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
  class LookupInsightEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupInsightEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LookupInsightEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LookupInsightEventsResponseBody() = default ;
    LookupInsightEventsResponseBody(const LookupInsightEventsResponseBody &) = default ;
    LookupInsightEventsResponseBody(LookupInsightEventsResponseBody &&) = default ;
    LookupInsightEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupInsightEventsResponseBody() = default ;
    LookupInsightEventsResponseBody& operator=(const LookupInsightEventsResponseBody &) = default ;
    LookupInsightEventsResponseBody& operator=(LookupInsightEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<Darabonba::Json> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getEvents() { DARABONBA_PTR_GET(events_, vector<Darabonba::Json>) };
    inline LookupInsightEventsResponseBody& setEvents(const vector<Darabonba::Json> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline LookupInsightEventsResponseBody& setEvents(vector<Darabonba::Json> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupInsightEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LookupInsightEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Darabonba::Json>> events_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
