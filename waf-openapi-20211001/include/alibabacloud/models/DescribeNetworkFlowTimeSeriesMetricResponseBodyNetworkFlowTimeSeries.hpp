// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODYNETWORKFLOWTIMESERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODYNETWORKFLOWTIMESERIES_HPP_
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
  class DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Timestamps, timestamps_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Timestamps, timestamps_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries(const DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries(DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries &&) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& operator=(const DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& operator=(DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metric_ != nullptr
        && this->timestamps_ != nullptr && this->values_ != nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // timestamps Field Functions 
    bool hasTimestamps() const { return this->timestamps_ != nullptr;};
    void deleteTimestamps() { this->timestamps_ = nullptr;};
    inline const vector<string> & timestamps() const { DARABONBA_PTR_GET_CONST(timestamps_, vector<string>) };
    inline vector<string> timestamps() { DARABONBA_PTR_GET(timestamps_, vector<string>) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& setTimestamps(const vector<string> & timestamps) { DARABONBA_PTR_SET_VALUE(timestamps_, timestamps) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& setTimestamps(vector<string> && timestamps) { DARABONBA_PTR_SET_RVALUE(timestamps_, timestamps) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<int64_t> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<int64_t>) };
    inline vector<int64_t> values() { DARABONBA_PTR_GET(values_, vector<int64_t>) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& setValues(const vector<int64_t> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries& setValues(vector<int64_t> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The metric name, consistent with the Metric request parameter.
    std::shared_ptr<string> metric_ = nullptr;
    // The array of timestamps (seconds) marking the start of each time interval.
    std::shared_ptr<vector<string>> timestamps_ = nullptr;
    // The array of counts, each representing the count for the corresponding time interval.
    std::shared_ptr<vector<int64_t>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
