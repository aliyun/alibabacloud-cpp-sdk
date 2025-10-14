// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODYTIMESERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODYTIMESERIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels.hpp>
#include <alibabacloud/models/DescribeHybridMonitorDataListResponseBodyTimeSeriesValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorDataListResponseBodyTimeSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorDataListResponseBodyTimeSeries& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorDataListResponseBodyTimeSeries& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeHybridMonitorDataListResponseBodyTimeSeries() = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeries(const DescribeHybridMonitorDataListResponseBodyTimeSeries &) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeries(DescribeHybridMonitorDataListResponseBodyTimeSeries &&) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorDataListResponseBodyTimeSeries() = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeries& operator=(const DescribeHybridMonitorDataListResponseBodyTimeSeries &) = default ;
    DescribeHybridMonitorDataListResponseBodyTimeSeries& operator=(DescribeHybridMonitorDataListResponseBodyTimeSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->metricName_ == nullptr && return this->values_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels>) };
    inline vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels>) };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeries& setLabels(const vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeries& setLabels(vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeries& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesValues>) };
    inline vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesValues> values() { DARABONBA_PTR_GET(values_, vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesValues>) };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeries& setValues(const vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeHybridMonitorDataListResponseBodyTimeSeries& setValues(vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The tags of the time dimension.
    std::shared_ptr<vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesLabels>> labels_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The metric values that are collected at different timestamps.
    std::shared_ptr<vector<Models::DescribeHybridMonitorDataListResponseBodyTimeSeriesValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
