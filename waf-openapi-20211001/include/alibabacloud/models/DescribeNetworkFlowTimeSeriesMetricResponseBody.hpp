// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTimeSeriesMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkFlowTimeSeries, networkFlowTimeSeries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkFlowTimeSeries, networkFlowTimeSeries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    DescribeNetworkFlowTimeSeriesMetricResponseBody() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody(const DescribeNetworkFlowTimeSeriesMetricResponseBody &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody(DescribeNetworkFlowTimeSeriesMetricResponseBody &&) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTimeSeriesMetricResponseBody() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody& operator=(const DescribeNetworkFlowTimeSeriesMetricResponseBody &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody& operator=(DescribeNetworkFlowTimeSeriesMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeSeriesMetaData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeSeriesMetaData& obj) { 
        DARABONBA_PTR_TO_JSON(AggregateInterval, aggregateInterval_);
        DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
        DARABONBA_PTR_TO_JSON(Units, units_);
      };
      friend void from_json(const Darabonba::Json& j, TimeSeriesMetaData& obj) { 
        DARABONBA_PTR_FROM_JSON(AggregateInterval, aggregateInterval_);
        DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
        DARABONBA_PTR_FROM_JSON(Units, units_);
      };
      TimeSeriesMetaData() = default ;
      TimeSeriesMetaData(const TimeSeriesMetaData &) = default ;
      TimeSeriesMetaData(TimeSeriesMetaData &&) = default ;
      TimeSeriesMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeSeriesMetaData() = default ;
      TimeSeriesMetaData& operator=(const TimeSeriesMetaData &) = default ;
      TimeSeriesMetaData& operator=(TimeSeriesMetaData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DateRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DateRange& obj) { 
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        };
        friend void from_json(const Darabonba::Json& j, DateRange& obj) { 
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        };
        DateRange() = default ;
        DateRange(const DateRange &) = default ;
        DateRange(DateRange &&) = default ;
        DateRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DateRange() = default ;
        DateRange& operator=(const DateRange &) = default ;
        DateRange& operator=(DateRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endDate_ == nullptr
        && this->startDate_ == nullptr; };
        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
        inline DateRange& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
        inline DateRange& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      protected:
        // The end time of the query range (Unix timestamp, seconds). Same as the EndDate request parameter.
        shared_ptr<int64_t> endDate_ {};
        // The start time of the query range (Unix timestamp, seconds). Same as the StartDate request parameter.
        shared_ptr<int64_t> startDate_ {};
      };

      virtual bool empty() const override { return this->aggregateInterval_ == nullptr
        && this->dateRange_ == nullptr && this->units_ == nullptr; };
      // aggregateInterval Field Functions 
      bool hasAggregateInterval() const { return this->aggregateInterval_ != nullptr;};
      void deleteAggregateInterval() { this->aggregateInterval_ = nullptr;};
      inline string getAggregateInterval() const { DARABONBA_PTR_GET_DEFAULT(aggregateInterval_, "") };
      inline TimeSeriesMetaData& setAggregateInterval(string aggregateInterval) { DARABONBA_PTR_SET_VALUE(aggregateInterval_, aggregateInterval) };


      // dateRange Field Functions 
      bool hasDateRange() const { return this->dateRange_ != nullptr;};
      void deleteDateRange() { this->dateRange_ = nullptr;};
      inline const TimeSeriesMetaData::DateRange & getDateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, TimeSeriesMetaData::DateRange) };
      inline TimeSeriesMetaData::DateRange getDateRange() { DARABONBA_PTR_GET(dateRange_, TimeSeriesMetaData::DateRange) };
      inline TimeSeriesMetaData& setDateRange(const TimeSeriesMetaData::DateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
      inline TimeSeriesMetaData& setDateRange(TimeSeriesMetaData::DateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


      // units Field Functions 
      bool hasUnits() const { return this->units_ != nullptr;};
      void deleteUnits() { this->units_ = nullptr;};
      inline string getUnits() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
      inline TimeSeriesMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


    protected:
      // The time granularity. For example, 15m indicates that each data point is counted every 15 minutes. For details, see the **Time granularity of time series data points** section below.
      shared_ptr<string> aggregateInterval_ {};
      // The query time range.
      shared_ptr<TimeSeriesMetaData::DateRange> dateRange_ {};
      // The unit of the returned data. It is fixed as requests.
      shared_ptr<string> units_ {};
    };

    class NetworkFlowTimeSeries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkFlowTimeSeries& obj) { 
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(Timestamps, timestamps_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkFlowTimeSeries& obj) { 
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(Timestamps, timestamps_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      NetworkFlowTimeSeries() = default ;
      NetworkFlowTimeSeries(const NetworkFlowTimeSeries &) = default ;
      NetworkFlowTimeSeries(NetworkFlowTimeSeries &&) = default ;
      NetworkFlowTimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkFlowTimeSeries() = default ;
      NetworkFlowTimeSeries& operator=(const NetworkFlowTimeSeries &) = default ;
      NetworkFlowTimeSeries& operator=(NetworkFlowTimeSeries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metric_ == nullptr
        && this->timestamps_ == nullptr && this->values_ == nullptr; };
      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
      inline NetworkFlowTimeSeries& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


      // timestamps Field Functions 
      bool hasTimestamps() const { return this->timestamps_ != nullptr;};
      void deleteTimestamps() { this->timestamps_ = nullptr;};
      inline const vector<string> & getTimestamps() const { DARABONBA_PTR_GET_CONST(timestamps_, vector<string>) };
      inline vector<string> getTimestamps() { DARABONBA_PTR_GET(timestamps_, vector<string>) };
      inline NetworkFlowTimeSeries& setTimestamps(const vector<string> & timestamps) { DARABONBA_PTR_SET_VALUE(timestamps_, timestamps) };
      inline NetworkFlowTimeSeries& setTimestamps(vector<string> && timestamps) { DARABONBA_PTR_SET_RVALUE(timestamps_, timestamps) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<int64_t> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<int64_t>) };
      inline vector<int64_t> getValues() { DARABONBA_PTR_GET(values_, vector<int64_t>) };
      inline NetworkFlowTimeSeries& setValues(const vector<int64_t> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline NetworkFlowTimeSeries& setValues(vector<int64_t> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The metric name, consistent with the Metric request parameter.
      shared_ptr<string> metric_ {};
      // The array of timestamps (seconds) marking the start of each time interval.
      shared_ptr<vector<string>> timestamps_ {};
      // The array of counts, each representing the count for the corresponding time interval.
      shared_ptr<vector<int64_t>> values_ {};
    };

    virtual bool empty() const override { return this->networkFlowTimeSeries_ == nullptr
        && this->requestId_ == nullptr && this->timeSeriesMetaData_ == nullptr; };
    // networkFlowTimeSeries Field Functions 
    bool hasNetworkFlowTimeSeries() const { return this->networkFlowTimeSeries_ != nullptr;};
    void deleteNetworkFlowTimeSeries() { this->networkFlowTimeSeries_ = nullptr;};
    inline const vector<DescribeNetworkFlowTimeSeriesMetricResponseBody::NetworkFlowTimeSeries> & getNetworkFlowTimeSeries() const { DARABONBA_PTR_GET_CONST(networkFlowTimeSeries_, vector<DescribeNetworkFlowTimeSeriesMetricResponseBody::NetworkFlowTimeSeries>) };
    inline vector<DescribeNetworkFlowTimeSeriesMetricResponseBody::NetworkFlowTimeSeries> getNetworkFlowTimeSeries() { DARABONBA_PTR_GET(networkFlowTimeSeries_, vector<DescribeNetworkFlowTimeSeriesMetricResponseBody::NetworkFlowTimeSeries>) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setNetworkFlowTimeSeries(const vector<DescribeNetworkFlowTimeSeriesMetricResponseBody::NetworkFlowTimeSeries> & networkFlowTimeSeries) { DARABONBA_PTR_SET_VALUE(networkFlowTimeSeries_, networkFlowTimeSeries) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setNetworkFlowTimeSeries(vector<DescribeNetworkFlowTimeSeriesMetricResponseBody::NetworkFlowTimeSeries> && networkFlowTimeSeries) { DARABONBA_PTR_SET_RVALUE(networkFlowTimeSeries_, networkFlowTimeSeries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeSeriesMetaData Field Functions 
    bool hasTimeSeriesMetaData() const { return this->timeSeriesMetaData_ != nullptr;};
    void deleteTimeSeriesMetaData() { this->timeSeriesMetaData_ = nullptr;};
    inline const DescribeNetworkFlowTimeSeriesMetricResponseBody::TimeSeriesMetaData & getTimeSeriesMetaData() const { DARABONBA_PTR_GET_CONST(timeSeriesMetaData_, DescribeNetworkFlowTimeSeriesMetricResponseBody::TimeSeriesMetaData) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody::TimeSeriesMetaData getTimeSeriesMetaData() { DARABONBA_PTR_GET(timeSeriesMetaData_, DescribeNetworkFlowTimeSeriesMetricResponseBody::TimeSeriesMetaData) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setTimeSeriesMetaData(const DescribeNetworkFlowTimeSeriesMetricResponseBody::TimeSeriesMetaData & timeSeriesMetaData) { DARABONBA_PTR_SET_VALUE(timeSeriesMetaData_, timeSeriesMetaData) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setTimeSeriesMetaData(DescribeNetworkFlowTimeSeriesMetricResponseBody::TimeSeriesMetaData && timeSeriesMetaData) { DARABONBA_PTR_SET_RVALUE(timeSeriesMetaData_, timeSeriesMetaData) };


  protected:
    // The array of time-series data. Supports returning data with multiple values.
    shared_ptr<vector<DescribeNetworkFlowTimeSeriesMetricResponseBody::NetworkFlowTimeSeries>> networkFlowTimeSeries_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The metadata of the returned data.
    shared_ptr<DescribeNetworkFlowTimeSeriesMetricResponseBody::TimeSeriesMetaData> timeSeriesMetaData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
