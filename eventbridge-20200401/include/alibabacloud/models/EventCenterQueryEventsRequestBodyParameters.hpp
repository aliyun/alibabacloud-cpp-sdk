// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EventCenterQueryEventsRequestBodyParametersCalculations.hpp>
#include <alibabacloud/models/EventCenterQueryEventsRequestBodyParametersFilters.hpp>
#include <alibabacloud/models/EventCenterQueryEventsRequestBodyParametersOrders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsRequestBodyParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequestBodyParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Breakdowns, breakdowns_);
      DARABONBA_PTR_TO_JSON(Calculations, calculations_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FilterCombination, filterCombination_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Orders, orders_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequestBodyParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Breakdowns, breakdowns_);
      DARABONBA_PTR_FROM_JSON(Calculations, calculations_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FilterCombination, filterCombination_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Orders, orders_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    EventCenterQueryEventsRequestBodyParameters() = default ;
    EventCenterQueryEventsRequestBodyParameters(const EventCenterQueryEventsRequestBodyParameters &) = default ;
    EventCenterQueryEventsRequestBodyParameters(EventCenterQueryEventsRequestBodyParameters &&) = default ;
    EventCenterQueryEventsRequestBodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequestBodyParameters() = default ;
    EventCenterQueryEventsRequestBodyParameters& operator=(const EventCenterQueryEventsRequestBodyParameters &) = default ;
    EventCenterQueryEventsRequestBodyParameters& operator=(EventCenterQueryEventsRequestBodyParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->breakdowns_ != nullptr
        && this->calculations_ != nullptr && this->endTime_ != nullptr && this->filterCombination_ != nullptr && this->filters_ != nullptr && this->granularity_ != nullptr
        && this->limit_ != nullptr && this->offset_ != nullptr && this->orders_ != nullptr && this->startTime_ != nullptr && this->timeRange_ != nullptr; };
    // breakdowns Field Functions 
    bool hasBreakdowns() const { return this->breakdowns_ != nullptr;};
    void deleteBreakdowns() { this->breakdowns_ = nullptr;};
    inline const vector<string> & breakdowns() const { DARABONBA_PTR_GET_CONST(breakdowns_, vector<string>) };
    inline vector<string> breakdowns() { DARABONBA_PTR_GET(breakdowns_, vector<string>) };
    inline EventCenterQueryEventsRequestBodyParameters& setBreakdowns(const vector<string> & breakdowns) { DARABONBA_PTR_SET_VALUE(breakdowns_, breakdowns) };
    inline EventCenterQueryEventsRequestBodyParameters& setBreakdowns(vector<string> && breakdowns) { DARABONBA_PTR_SET_RVALUE(breakdowns_, breakdowns) };


    // calculations Field Functions 
    bool hasCalculations() const { return this->calculations_ != nullptr;};
    void deleteCalculations() { this->calculations_ = nullptr;};
    inline const vector<Models::EventCenterQueryEventsRequestBodyParametersCalculations> & calculations() const { DARABONBA_PTR_GET_CONST(calculations_, vector<Models::EventCenterQueryEventsRequestBodyParametersCalculations>) };
    inline vector<Models::EventCenterQueryEventsRequestBodyParametersCalculations> calculations() { DARABONBA_PTR_GET(calculations_, vector<Models::EventCenterQueryEventsRequestBodyParametersCalculations>) };
    inline EventCenterQueryEventsRequestBodyParameters& setCalculations(const vector<Models::EventCenterQueryEventsRequestBodyParametersCalculations> & calculations) { DARABONBA_PTR_SET_VALUE(calculations_, calculations) };
    inline EventCenterQueryEventsRequestBodyParameters& setCalculations(vector<Models::EventCenterQueryEventsRequestBodyParametersCalculations> && calculations) { DARABONBA_PTR_SET_RVALUE(calculations_, calculations) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline EventCenterQueryEventsRequestBodyParameters& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterCombination Field Functions 
    bool hasFilterCombination() const { return this->filterCombination_ != nullptr;};
    void deleteFilterCombination() { this->filterCombination_ = nullptr;};
    inline string filterCombination() const { DARABONBA_PTR_GET_DEFAULT(filterCombination_, "") };
    inline EventCenterQueryEventsRequestBodyParameters& setFilterCombination(string filterCombination) { DARABONBA_PTR_SET_VALUE(filterCombination_, filterCombination) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::EventCenterQueryEventsRequestBodyParametersFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::EventCenterQueryEventsRequestBodyParametersFilters>) };
    inline vector<Models::EventCenterQueryEventsRequestBodyParametersFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::EventCenterQueryEventsRequestBodyParametersFilters>) };
    inline EventCenterQueryEventsRequestBodyParameters& setFilters(const vector<Models::EventCenterQueryEventsRequestBodyParametersFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline EventCenterQueryEventsRequestBodyParameters& setFilters(vector<Models::EventCenterQueryEventsRequestBodyParametersFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline int32_t granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, 0) };
    inline EventCenterQueryEventsRequestBodyParameters& setGranularity(int32_t granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline EventCenterQueryEventsRequestBodyParameters& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline EventCenterQueryEventsRequestBodyParameters& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orders Field Functions 
    bool hasOrders() const { return this->orders_ != nullptr;};
    void deleteOrders() { this->orders_ = nullptr;};
    inline const vector<Models::EventCenterQueryEventsRequestBodyParametersOrders> & orders() const { DARABONBA_PTR_GET_CONST(orders_, vector<Models::EventCenterQueryEventsRequestBodyParametersOrders>) };
    inline vector<Models::EventCenterQueryEventsRequestBodyParametersOrders> orders() { DARABONBA_PTR_GET(orders_, vector<Models::EventCenterQueryEventsRequestBodyParametersOrders>) };
    inline EventCenterQueryEventsRequestBodyParameters& setOrders(const vector<Models::EventCenterQueryEventsRequestBodyParametersOrders> & orders) { DARABONBA_PTR_SET_VALUE(orders_, orders) };
    inline EventCenterQueryEventsRequestBodyParameters& setOrders(vector<Models::EventCenterQueryEventsRequestBodyParametersOrders> && orders) { DARABONBA_PTR_SET_RVALUE(orders_, orders) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline EventCenterQueryEventsRequestBodyParameters& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline int64_t timeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, 0L) };
    inline EventCenterQueryEventsRequestBodyParameters& setTimeRange(int64_t timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    // Specifies whether to further split the dataset based on the column name.
    std::shared_ptr<vector<string>> breakdowns_ = nullptr;
    // The operator that is used to calculate the specified column.
    std::shared_ptr<vector<Models::EventCenterQueryEventsRequestBodyParametersCalculations>> calculations_ = nullptr;
    // The timestamp that specifies the end of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The logic used to filter the combination of conditions.
    std::shared_ptr<string> filterCombination_ = nullptr;
    // The filter conditions.
    std::shared_ptr<vector<Models::EventCenterQueryEventsRequestBodyParametersFilters>> filters_ = nullptr;
    // The minimum time unit for querying time series data. Minimum value: 1. Unit: seconds. The value of this parameter is a recommended value. The actual value returned shall prevail.
    std::shared_ptr<int32_t> granularity_ = nullptr;
    // The maximum number of events to query. Valid values: 1 to 10000.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The offset of the start position for this query. The offset starts from 0.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // The order of the query results. This parameter is valid only if you set QueryType to table.
    std::shared_ptr<vector<Models::EventCenterQueryEventsRequestBodyParametersOrders>> orders_ = nullptr;
    // The timestamp that specifies the beginning of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The time range during which events are queried. Minimum value: 1000. Unit: milliseconds.
    std::shared_ptr<int64_t> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
