// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExecutionHistoryResponseBodyEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class GetExecutionHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecutionHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecutionHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExecutionHistoryResponseBody() = default ;
    GetExecutionHistoryResponseBody(const GetExecutionHistoryResponseBody &) = default ;
    GetExecutionHistoryResponseBody(GetExecutionHistoryResponseBody &&) = default ;
    GetExecutionHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecutionHistoryResponseBody() = default ;
    GetExecutionHistoryResponseBody& operator=(const GetExecutionHistoryResponseBody &) = default ;
    GetExecutionHistoryResponseBody& operator=(GetExecutionHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<GetExecutionHistoryResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<GetExecutionHistoryResponseBodyEvents>) };
    inline vector<GetExecutionHistoryResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<GetExecutionHistoryResponseBodyEvents>) };
    inline GetExecutionHistoryResponseBody& setEvents(const vector<GetExecutionHistoryResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetExecutionHistoryResponseBody& setEvents(vector<GetExecutionHistoryResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetExecutionHistoryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExecutionHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The events.
    std::shared_ptr<vector<GetExecutionHistoryResponseBodyEvents>> events_ = nullptr;
    // You do not need to specify this parameter for the first request. The returned value of **ScheduleEventId** is used as the token for the next query. No value is returned for the last query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
