// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICRESPONSEBODY_HPP_
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
  class DescribeSecurityEventTimeSeriesMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventTimeSeries, securityEventTimeSeries_);
      DARABONBA_PTR_TO_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventTimeSeries, securityEventTimeSeries_);
      DARABONBA_PTR_FROM_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    DescribeSecurityEventTimeSeriesMetricResponseBody() = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody(const DescribeSecurityEventTimeSeriesMetricResponseBody &) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody(DescribeSecurityEventTimeSeriesMetricResponseBody &&) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTimeSeriesMetricResponseBody() = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody& operator=(const DescribeSecurityEventTimeSeriesMetricResponseBody &) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody& operator=(DescribeSecurityEventTimeSeriesMetricResponseBody &&) = default ;
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
        // The end of the time range to query. The value is a Unix timestamp. Unit: seconds. This value is the same as the value of EndDate in the request parameters.
        shared_ptr<int64_t> endDate_ {};
        // The beginning of the time range to query. The value is a Unix timestamp. Unit: seconds. This value is the same as the value of StartDate in the request parameters.
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
      // The time granularity of data points in the time series data returned. For example, a value of 15m indicates that data points are collected at 15-minute intervals. For more information about time granularities, see the **Time granularities of data points in time series** section below.
      shared_ptr<string> aggregateInterval_ {};
      // The time range that is used for the query.
      shared_ptr<TimeSeriesMetaData::DateRange> dateRange_ {};
      // The unit of the statistics returned. It is fixed as requests.
      shared_ptr<string> units_ {};
    };

    class SecurityEventTimeSeries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventTimeSeries& obj) { 
        DARABONBA_PTR_TO_JSON(Metric, metric_);
        DARABONBA_PTR_TO_JSON(Timestamps, timestamps_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventTimeSeries& obj) { 
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
        DARABONBA_PTR_FROM_JSON(Timestamps, timestamps_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      SecurityEventTimeSeries() = default ;
      SecurityEventTimeSeries(const SecurityEventTimeSeries &) = default ;
      SecurityEventTimeSeries(SecurityEventTimeSeries &&) = default ;
      SecurityEventTimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventTimeSeries() = default ;
      SecurityEventTimeSeries& operator=(const SecurityEventTimeSeries &) = default ;
      SecurityEventTimeSeries& operator=(SecurityEventTimeSeries &&) = default ;
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
      inline SecurityEventTimeSeries& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


      // timestamps Field Functions 
      bool hasTimestamps() const { return this->timestamps_ != nullptr;};
      void deleteTimestamps() { this->timestamps_ = nullptr;};
      inline const vector<string> & getTimestamps() const { DARABONBA_PTR_GET_CONST(timestamps_, vector<string>) };
      inline vector<string> getTimestamps() { DARABONBA_PTR_GET(timestamps_, vector<string>) };
      inline SecurityEventTimeSeries& setTimestamps(const vector<string> & timestamps) { DARABONBA_PTR_SET_VALUE(timestamps_, timestamps) };
      inline SecurityEventTimeSeries& setTimestamps(vector<string> && timestamps) { DARABONBA_PTR_SET_RVALUE(timestamps_, timestamps) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<int64_t> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<int64_t>) };
      inline vector<int64_t> getValues() { DARABONBA_PTR_GET(values_, vector<int64_t>) };
      inline SecurityEventTimeSeries& setValues(const vector<int64_t> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline SecurityEventTimeSeries& setValues(vector<int64_t> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The metric. This value is the same as the value of Metric in the request parameters.
      shared_ptr<string> metric_ {};
      // The time points. Each point represents a time range.
      shared_ptr<vector<string>> timestamps_ {};
      // The data points. Each point represents a count for a time range.
      shared_ptr<vector<int64_t>> values_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEventTimeSeries_ == nullptr && this->timeSeriesMetaData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventTimeSeries Field Functions 
    bool hasSecurityEventTimeSeries() const { return this->securityEventTimeSeries_ != nullptr;};
    void deleteSecurityEventTimeSeries() { this->securityEventTimeSeries_ = nullptr;};
    inline const vector<DescribeSecurityEventTimeSeriesMetricResponseBody::SecurityEventTimeSeries> & getSecurityEventTimeSeries() const { DARABONBA_PTR_GET_CONST(securityEventTimeSeries_, vector<DescribeSecurityEventTimeSeriesMetricResponseBody::SecurityEventTimeSeries>) };
    inline vector<DescribeSecurityEventTimeSeriesMetricResponseBody::SecurityEventTimeSeries> getSecurityEventTimeSeries() { DARABONBA_PTR_GET(securityEventTimeSeries_, vector<DescribeSecurityEventTimeSeriesMetricResponseBody::SecurityEventTimeSeries>) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setSecurityEventTimeSeries(const vector<DescribeSecurityEventTimeSeriesMetricResponseBody::SecurityEventTimeSeries> & securityEventTimeSeries) { DARABONBA_PTR_SET_VALUE(securityEventTimeSeries_, securityEventTimeSeries) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setSecurityEventTimeSeries(vector<DescribeSecurityEventTimeSeriesMetricResponseBody::SecurityEventTimeSeries> && securityEventTimeSeries) { DARABONBA_PTR_SET_RVALUE(securityEventTimeSeries_, securityEventTimeSeries) };


    // timeSeriesMetaData Field Functions 
    bool hasTimeSeriesMetaData() const { return this->timeSeriesMetaData_ != nullptr;};
    void deleteTimeSeriesMetaData() { this->timeSeriesMetaData_ = nullptr;};
    inline const DescribeSecurityEventTimeSeriesMetricResponseBody::TimeSeriesMetaData & getTimeSeriesMetaData() const { DARABONBA_PTR_GET_CONST(timeSeriesMetaData_, DescribeSecurityEventTimeSeriesMetricResponseBody::TimeSeriesMetaData) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody::TimeSeriesMetaData getTimeSeriesMetaData() { DARABONBA_PTR_GET(timeSeriesMetaData_, DescribeSecurityEventTimeSeriesMetricResponseBody::TimeSeriesMetaData) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setTimeSeriesMetaData(const DescribeSecurityEventTimeSeriesMetricResponseBody::TimeSeriesMetaData & timeSeriesMetaData) { DARABONBA_PTR_SET_VALUE(timeSeriesMetaData_, timeSeriesMetaData) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setTimeSeriesMetaData(DescribeSecurityEventTimeSeriesMetricResponseBody::TimeSeriesMetaData && timeSeriesMetaData) { DARABONBA_PTR_SET_RVALUE(timeSeriesMetaData_, timeSeriesMetaData) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time series data returned. This operation can return time series for multiple metrics.
    shared_ptr<vector<DescribeSecurityEventTimeSeriesMetricResponseBody::SecurityEventTimeSeries>> securityEventTimeSeries_ {};
    // The metadata of the time series data returned.
    shared_ptr<DescribeSecurityEventTimeSeriesMetricResponseBody::TimeSeriesMetaData> timeSeriesMetaData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
