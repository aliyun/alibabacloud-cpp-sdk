// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventsViewResponseBodyEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListEventsViewResponseBody() = default ;
    ListEventsViewResponseBody(const ListEventsViewResponseBody &) = default ;
    ListEventsViewResponseBody(ListEventsViewResponseBody &&) = default ;
    ListEventsViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBody() = default ;
    ListEventsViewResponseBody& operator=(const ListEventsViewResponseBody &) = default ;
    ListEventsViewResponseBody& operator=(ListEventsViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->events_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<ListEventsViewResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<ListEventsViewResponseBodyEvents>) };
    inline vector<ListEventsViewResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<ListEventsViewResponseBodyEvents>) };
    inline ListEventsViewResponseBody& setEvents(const vector<ListEventsViewResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline ListEventsViewResponseBody& setEvents(vector<ListEventsViewResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventsViewResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventsViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListEventsViewResponseBodyEvents>> events_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
