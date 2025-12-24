// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODYHISTORICALMETRICSHISTORICALMETRIC_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODYHISTORICALMETRICSHISTORICALMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric& obj) { 
      DARABONBA_PTR_TO_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric() = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric(const QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric &) = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric(QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric &&) = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric() = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric& operator=(const QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric &) = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric& operator=(QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricValue_ == nullptr
        && return this->time_ == nullptr; };
    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline string metricValue() const { DARABONBA_PTR_GET_DEFAULT(metricValue_, "") };
    inline QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric& setMetricValue(string metricValue) { DARABONBA_PTR_SET_VALUE(metricValue_, metricValue) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> metricValue_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
