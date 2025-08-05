// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEDEVENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEDEVENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTracedEventsResponseBodyDataEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryTracedEventsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTracedEventsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTracedEventsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryTracedEventsResponseBodyData() = default ;
    QueryTracedEventsResponseBodyData(const QueryTracedEventsResponseBodyData &) = default ;
    QueryTracedEventsResponseBodyData(QueryTracedEventsResponseBodyData &&) = default ;
    QueryTracedEventsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTracedEventsResponseBodyData() = default ;
    QueryTracedEventsResponseBodyData& operator=(const QueryTracedEventsResponseBodyData &) = default ;
    QueryTracedEventsResponseBodyData& operator=(QueryTracedEventsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->events_ != nullptr
        && this->nextToken_ != nullptr && this->total_ != nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<Models::QueryTracedEventsResponseBodyDataEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<Models::QueryTracedEventsResponseBodyDataEvents>) };
    inline vector<Models::QueryTracedEventsResponseBodyDataEvents> events() { DARABONBA_PTR_GET(events_, vector<Models::QueryTracedEventsResponseBodyDataEvents>) };
    inline QueryTracedEventsResponseBodyData& setEvents(const vector<Models::QueryTracedEventsResponseBodyDataEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline QueryTracedEventsResponseBodyData& setEvents(vector<Models::QueryTracedEventsResponseBodyDataEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryTracedEventsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryTracedEventsResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The events.
    std::shared_ptr<vector<Models::QueryTracedEventsResponseBodyDataEvents>> events_ = nullptr;
    // If excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
