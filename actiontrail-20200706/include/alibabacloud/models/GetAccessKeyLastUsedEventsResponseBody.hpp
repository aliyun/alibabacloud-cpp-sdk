// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccessKeyLastUsedEventsResponseBodyEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedEventsResponseBody() = default ;
    GetAccessKeyLastUsedEventsResponseBody(const GetAccessKeyLastUsedEventsResponseBody &) = default ;
    GetAccessKeyLastUsedEventsResponseBody(GetAccessKeyLastUsedEventsResponseBody &&) = default ;
    GetAccessKeyLastUsedEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedEventsResponseBody() = default ;
    GetAccessKeyLastUsedEventsResponseBody& operator=(const GetAccessKeyLastUsedEventsResponseBody &) = default ;
    GetAccessKeyLastUsedEventsResponseBody& operator=(GetAccessKeyLastUsedEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->events_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<GetAccessKeyLastUsedEventsResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<GetAccessKeyLastUsedEventsResponseBodyEvents>) };
    inline vector<GetAccessKeyLastUsedEventsResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<GetAccessKeyLastUsedEventsResponseBodyEvents>) };
    inline GetAccessKeyLastUsedEventsResponseBody& setEvents(const vector<GetAccessKeyLastUsedEventsResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetAccessKeyLastUsedEventsResponseBody& setEvents(vector<GetAccessKeyLastUsedEventsResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAccessKeyLastUsedEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of returned events.
    // 
    // This parameter is required.
    std::shared_ptr<vector<GetAccessKeyLastUsedEventsResponseBodyEvents>> events_ = nullptr;
    // The token that determines the start point of the query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
