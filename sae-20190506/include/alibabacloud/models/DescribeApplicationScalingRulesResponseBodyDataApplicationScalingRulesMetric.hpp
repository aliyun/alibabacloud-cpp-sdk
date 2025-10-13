// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& obj) { 
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(MetricSource, metricSource_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(MetricsStatus, metricsStatus_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(PrometheusMetrics, prometheusMetrics_);
      DARABONBA_PTR_TO_JSON(PrometheusToken, prometheusToken_);
      DARABONBA_PTR_TO_JSON(PrometheusUrl, prometheusUrl_);
      DARABONBA_PTR_TO_JSON(ScaleDownRules, scaleDownRules_);
      DARABONBA_PTR_TO_JSON(ScaleUpRules, scaleUpRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(MetricSource, metricSource_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(MetricsStatus, metricsStatus_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(PrometheusMetrics, prometheusMetrics_);
      DARABONBA_PTR_FROM_JSON(PrometheusToken, prometheusToken_);
      DARABONBA_PTR_FROM_JSON(PrometheusUrl, prometheusUrl_);
      DARABONBA_PTR_FROM_JSON(ScaleDownRules, scaleDownRules_);
      DARABONBA_PTR_FROM_JSON(ScaleUpRules, scaleUpRules_);
    };
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric &&) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& operator=(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& operator=(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && return this->metricSource_ == nullptr && return this->metrics_ == nullptr && return this->metricsStatus_ == nullptr && return this->minReplicas_ == nullptr && return this->prometheusMetrics_ == nullptr
        && return this->prometheusToken_ == nullptr && return this->prometheusUrl_ == nullptr && return this->scaleDownRules_ == nullptr && return this->scaleUpRules_ == nullptr; };
    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // metricSource Field Functions 
    bool hasMetricSource() const { return this->metricSource_ != nullptr;};
    void deleteMetricSource() { this->metricSource_ = nullptr;};
    inline string metricSource() const { DARABONBA_PTR_GET_DEFAULT(metricSource_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setMetricSource(string metricSource) { DARABONBA_PTR_SET_VALUE(metricSource_, metricSource) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics>) };
    inline vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics>) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setMetrics(const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setMetrics(vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // metricsStatus Field Functions 
    bool hasMetricsStatus() const { return this->metricsStatus_ != nullptr;};
    void deleteMetricsStatus() { this->metricsStatus_ = nullptr;};
    inline const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus & metricsStatus() const { DARABONBA_PTR_GET_CONST(metricsStatus_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus) };
    inline Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus metricsStatus() { DARABONBA_PTR_GET(metricsStatus_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setMetricsStatus(const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus & metricsStatus) { DARABONBA_PTR_SET_VALUE(metricsStatus_, metricsStatus) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setMetricsStatus(Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus && metricsStatus) { DARABONBA_PTR_SET_RVALUE(metricsStatus_, metricsStatus) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // prometheusMetrics Field Functions 
    bool hasPrometheusMetrics() const { return this->prometheusMetrics_ != nullptr;};
    void deletePrometheusMetrics() { this->prometheusMetrics_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics> & prometheusMetrics() const { DARABONBA_PTR_GET_CONST(prometheusMetrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics>) };
    inline vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics> prometheusMetrics() { DARABONBA_PTR_GET(prometheusMetrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics>) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setPrometheusMetrics(const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics> & prometheusMetrics) { DARABONBA_PTR_SET_VALUE(prometheusMetrics_, prometheusMetrics) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setPrometheusMetrics(vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics> && prometheusMetrics) { DARABONBA_PTR_SET_RVALUE(prometheusMetrics_, prometheusMetrics) };


    // prometheusToken Field Functions 
    bool hasPrometheusToken() const { return this->prometheusToken_ != nullptr;};
    void deletePrometheusToken() { this->prometheusToken_ = nullptr;};
    inline string prometheusToken() const { DARABONBA_PTR_GET_DEFAULT(prometheusToken_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setPrometheusToken(string prometheusToken) { DARABONBA_PTR_SET_VALUE(prometheusToken_, prometheusToken) };


    // prometheusUrl Field Functions 
    bool hasPrometheusUrl() const { return this->prometheusUrl_ != nullptr;};
    void deletePrometheusUrl() { this->prometheusUrl_ = nullptr;};
    inline string prometheusUrl() const { DARABONBA_PTR_GET_DEFAULT(prometheusUrl_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setPrometheusUrl(string prometheusUrl) { DARABONBA_PTR_SET_VALUE(prometheusUrl_, prometheusUrl) };


    // scaleDownRules Field Functions 
    bool hasScaleDownRules() const { return this->scaleDownRules_ != nullptr;};
    void deleteScaleDownRules() { this->scaleDownRules_ = nullptr;};
    inline const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules & scaleDownRules() const { DARABONBA_PTR_GET_CONST(scaleDownRules_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules) };
    inline Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules scaleDownRules() { DARABONBA_PTR_GET(scaleDownRules_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setScaleDownRules(const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules & scaleDownRules) { DARABONBA_PTR_SET_VALUE(scaleDownRules_, scaleDownRules) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setScaleDownRules(Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules && scaleDownRules) { DARABONBA_PTR_SET_RVALUE(scaleDownRules_, scaleDownRules) };


    // scaleUpRules Field Functions 
    bool hasScaleUpRules() const { return this->scaleUpRules_ != nullptr;};
    void deleteScaleUpRules() { this->scaleUpRules_ = nullptr;};
    inline const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules & scaleUpRules() const { DARABONBA_PTR_GET_CONST(scaleUpRules_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules) };
    inline Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules scaleUpRules() { DARABONBA_PTR_GET(scaleUpRules_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setScaleUpRules(const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules & scaleUpRules) { DARABONBA_PTR_SET_VALUE(scaleUpRules_, scaleUpRules) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric& setScaleUpRules(Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules && scaleUpRules) { DARABONBA_PTR_SET_RVALUE(scaleUpRules_, scaleUpRules) };


  protected:
    // The maximum number of instances.
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    std::shared_ptr<string> metricSource_ = nullptr;
    // The list of metrics that are used to trigger the auto scaling policy.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetrics>> metrics_ = nullptr;
    // The execution status of the metric-based auto scaling policy.
    std::shared_ptr<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus> metricsStatus_ = nullptr;
    // The minimum number of instances.
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics>> prometheusMetrics_ = nullptr;
    std::shared_ptr<string> prometheusToken_ = nullptr;
    std::shared_ptr<string> prometheusUrl_ = nullptr;
    // Rules that determine the application scale-in.
    std::shared_ptr<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleDownRules> scaleDownRules_ = nullptr;
    // Rules that determine the application scale-out.
    std::shared_ptr<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules> scaleUpRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
