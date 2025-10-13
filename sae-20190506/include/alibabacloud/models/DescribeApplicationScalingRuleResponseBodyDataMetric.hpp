// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataMetricMetrics.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRuleResponseBodyDataMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRuleResponseBodyDataMetric& obj) { 
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(MetricsStatus, metricsStatus_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(ScaleDownRules, scaleDownRules_);
      DARABONBA_PTR_TO_JSON(ScaleUpRules, scaleUpRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRuleResponseBodyDataMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(MetricsStatus, metricsStatus_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(ScaleDownRules, scaleDownRules_);
      DARABONBA_PTR_FROM_JSON(ScaleUpRules, scaleUpRules_);
    };
    DescribeApplicationScalingRuleResponseBodyDataMetric() = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetric(const DescribeApplicationScalingRuleResponseBodyDataMetric &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetric(DescribeApplicationScalingRuleResponseBodyDataMetric &&) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRuleResponseBodyDataMetric() = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetric& operator=(const DescribeApplicationScalingRuleResponseBodyDataMetric &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetric& operator=(DescribeApplicationScalingRuleResponseBodyDataMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && return this->metrics_ == nullptr && return this->metricsStatus_ == nullptr && return this->minReplicas_ == nullptr && return this->scaleDownRules_ == nullptr && return this->scaleUpRules_ == nullptr; };
    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetrics>) };
    inline vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetrics>) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setMetrics(const vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setMetrics(vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // metricsStatus Field Functions 
    bool hasMetricsStatus() const { return this->metricsStatus_ != nullptr;};
    void deleteMetricsStatus() { this->metricsStatus_ = nullptr;};
    inline const Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus & metricsStatus() const { DARABONBA_PTR_GET_CONST(metricsStatus_, Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus) };
    inline Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus metricsStatus() { DARABONBA_PTR_GET(metricsStatus_, Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setMetricsStatus(const Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus & metricsStatus) { DARABONBA_PTR_SET_VALUE(metricsStatus_, metricsStatus) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setMetricsStatus(Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus && metricsStatus) { DARABONBA_PTR_SET_RVALUE(metricsStatus_, metricsStatus) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // scaleDownRules Field Functions 
    bool hasScaleDownRules() const { return this->scaleDownRules_ != nullptr;};
    void deleteScaleDownRules() { this->scaleDownRules_ = nullptr;};
    inline const Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules & scaleDownRules() const { DARABONBA_PTR_GET_CONST(scaleDownRules_, Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules) };
    inline Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules scaleDownRules() { DARABONBA_PTR_GET(scaleDownRules_, Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setScaleDownRules(const Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules & scaleDownRules) { DARABONBA_PTR_SET_VALUE(scaleDownRules_, scaleDownRules) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setScaleDownRules(Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules && scaleDownRules) { DARABONBA_PTR_SET_RVALUE(scaleDownRules_, scaleDownRules) };


    // scaleUpRules Field Functions 
    bool hasScaleUpRules() const { return this->scaleUpRules_ != nullptr;};
    void deleteScaleUpRules() { this->scaleUpRules_ = nullptr;};
    inline const Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules & scaleUpRules() const { DARABONBA_PTR_GET_CONST(scaleUpRules_, Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules) };
    inline Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules scaleUpRules() { DARABONBA_PTR_GET(scaleUpRules_, Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setScaleUpRules(const Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules & scaleUpRules) { DARABONBA_PTR_SET_VALUE(scaleUpRules_, scaleUpRules) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetric& setScaleUpRules(Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules && scaleUpRules) { DARABONBA_PTR_SET_RVALUE(scaleUpRules_, scaleUpRules) };


  protected:
    // The maximum number of instances.
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    // The list of metrics that are used to trigger the auto scaling policy.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetrics>> metrics_ = nullptr;
    // The execution status of the metric-based auto scaling policy.
    std::shared_ptr<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus> metricsStatus_ = nullptr;
    // The minimum number of instances.
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
    // Rules that determine the application scale-in.
    std::shared_ptr<Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleDownRules> scaleDownRules_ = nullptr;
    // Rules that determine the application scale-out.
    std::shared_ptr<Models::DescribeApplicationScalingRuleResponseBodyDataMetricScaleUpRules> scaleUpRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
