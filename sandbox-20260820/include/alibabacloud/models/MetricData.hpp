// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICDATA_HPP_
#define ALIBABACLOUD_MODELS_METRICDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class MetricData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricData& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, MetricData& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    MetricData() = default ;
    MetricData(const MetricData &) = default ;
    MetricData(MetricData &&) = default ;
    MetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricData() = default ;
    MetricData& operator=(const MetricData &) = default ;
    MetricData& operator=(MetricData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(metricName, metricName_);
        DARABONBA_PTR_TO_JSON(series, series_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(metricName, metricName_);
        DARABONBA_PTR_FROM_JSON(series, series_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(points, points_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(points, points_);
        };
        Series() = default ;
        Series(const Series &) = default ;
        Series(Series &&) = default ;
        Series(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Series() = default ;
        Series& operator=(const Series &) = default ;
        Series& operator=(Series &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Points : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Points& obj) { 
            DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Points& obj) { 
            DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Points() = default ;
          Points(const Points &) = default ;
          Points(Points &&) = default ;
          Points(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Points() = default ;
          Points& operator=(const Points &) = default ;
          Points& operator=(Points &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
          inline Points& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline Points& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The time corresponding to the metric value, in UTC seconds.
          // 
          // This parameter is required.
          shared_ptr<string> timestamp_ {};
          // The metric value at this time. The unit is specified in unit.
          // 
          // This parameter is required.
          shared_ptr<double> value_ {};
        };

        virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->points_ == nullptr; };
        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline const map<string, string> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, map<string, string>) };
        inline map<string, string> getDimensions() { DARABONBA_PTR_GET(dimensions_, map<string, string>) };
        inline Series& setDimensions(const map<string, string> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
        inline Series& setDimensions(map<string, string> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


        // points Field Functions 
        bool hasPoints() const { return this->points_ != nullptr;};
        void deletePoints() { this->points_ = nullptr;};
        inline const vector<Series::Points> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<Series::Points>) };
        inline vector<Series::Points> getPoints() { DARABONBA_PTR_GET(points_, vector<Series::Points>) };
        inline Series& setPoints(const vector<Series::Points> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
        inline Series& setPoints(vector<Series::Points> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


      protected:
        // The team, template, or other grouping values for this series.
        // 
        // This parameter is required.
        shared_ptr<map<string, string>> dimensions_ {};
        // The data points in chronological order. Only times with metric values are listed.
        // 
        // This parameter is required.
        shared_ptr<vector<Series::Points>> points_ {};
      };

      virtual bool empty() const override { return this->metricName_ == nullptr
        && this->series_ == nullptr && this->unit_ == nullptr; };
      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline Results& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<Results::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<Results::Series>) };
      inline vector<Results::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<Results::Series>) };
      inline Results& setSeries(const vector<Results::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline Results& setSeries(vector<Results::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Results& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The name of the metric in the request.
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // The time series for the metric. An empty array is returned if no data points exist.
      // 
      // This parameter is required.
      shared_ptr<vector<Results::Series>> series_ {};
      // The unit of the metric value, such as Core for CPU cores.
      // 
      // This parameter is required.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->groupBy_ == nullptr && this->period_ == nullptr && this->results_ == nullptr && this->startTime_ == nullptr && this->time_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline MetricData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<string> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<string>) };
    inline vector<string> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<string>) };
    inline MetricData& setGroupBy(const vector<string> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline MetricData& setGroupBy(vector<string> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline MetricData& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<MetricData::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<MetricData::Results>) };
    inline vector<MetricData::Results> getResults() { DARABONBA_PTR_GET(results_, vector<MetricData::Results>) };
    inline MetricData& setResults(const vector<MetricData::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline MetricData& setResults(vector<MetricData::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MetricData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline MetricData& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The end time of the time series query, exclusive.
    shared_ptr<string> endTime_ {};
    // The grouping keys used for this query. An empty array is returned if no grouping is applied.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> groupBy_ {};
    // The data point interval used for this query, in seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The result for each requested metric.
    // 
    // This parameter is required.
    shared_ptr<vector<MetricData::Results>> results_ {};
    // The start time of the time series query, inclusive.
    shared_ptr<string> startTime_ {};
    // The time of the query. Returned only for single-point queries.
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
