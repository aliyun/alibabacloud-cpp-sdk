// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EventCenterQueryEventsResponseBodyDataTable.hpp>
#include <alibabacloud/models/EventCenterQueryEventsResponseBodyDataTimeSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(TimeSeries, timeSeries_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(TimeSeries, timeSeries_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    EventCenterQueryEventsResponseBodyData() = default ;
    EventCenterQueryEventsResponseBodyData(const EventCenterQueryEventsResponseBodyData &) = default ;
    EventCenterQueryEventsResponseBodyData(EventCenterQueryEventsResponseBodyData &&) = default ;
    EventCenterQueryEventsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsResponseBodyData() = default ;
    EventCenterQueryEventsResponseBodyData& operator=(const EventCenterQueryEventsResponseBodyData &) = default ;
    EventCenterQueryEventsResponseBodyData& operator=(EventCenterQueryEventsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->table_ != nullptr && this->timeSeries_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EventCenterQueryEventsResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EventCenterQueryEventsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::EventCenterQueryEventsResponseBodyDataTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::EventCenterQueryEventsResponseBodyDataTable>) };
    inline vector<Models::EventCenterQueryEventsResponseBodyDataTable> table() { DARABONBA_PTR_GET(table_, vector<Models::EventCenterQueryEventsResponseBodyDataTable>) };
    inline EventCenterQueryEventsResponseBodyData& setTable(const vector<Models::EventCenterQueryEventsResponseBodyDataTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline EventCenterQueryEventsResponseBodyData& setTable(vector<Models::EventCenterQueryEventsResponseBodyDataTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // timeSeries Field Functions 
    bool hasTimeSeries() const { return this->timeSeries_ != nullptr;};
    void deleteTimeSeries() { this->timeSeries_ = nullptr;};
    inline const vector<Models::EventCenterQueryEventsResponseBodyDataTimeSeries> & timeSeries() const { DARABONBA_PTR_GET_CONST(timeSeries_, vector<Models::EventCenterQueryEventsResponseBodyDataTimeSeries>) };
    inline vector<Models::EventCenterQueryEventsResponseBodyDataTimeSeries> timeSeries() { DARABONBA_PTR_GET(timeSeries_, vector<Models::EventCenterQueryEventsResponseBodyDataTimeSeries>) };
    inline EventCenterQueryEventsResponseBodyData& setTimeSeries(const vector<Models::EventCenterQueryEventsResponseBodyDataTimeSeries> & timeSeries) { DARABONBA_PTR_SET_VALUE(timeSeries_, timeSeries) };
    inline EventCenterQueryEventsResponseBodyData& setTimeSeries(vector<Models::EventCenterQueryEventsResponseBodyDataTimeSeries> && timeSeries) { DARABONBA_PTR_SET_RVALUE(timeSeries_, timeSeries) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline EventCenterQueryEventsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<Models::EventCenterQueryEventsResponseBodyDataTable>> table_ = nullptr;
    std::shared_ptr<vector<Models::EventCenterQueryEventsResponseBodyDataTimeSeries>> timeSeries_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
