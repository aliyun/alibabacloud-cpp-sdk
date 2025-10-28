// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEMETRIC_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& obj) { 
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
    };
    friend void from_json(const Darabonba::Json& j, DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
    };
    DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric() = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric(const DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric &) = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric(DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric &&) = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric() = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& operator=(const DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric &) = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& operator=(DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && return this->metrics_ == nullptr && return this->minReplicas_ == nullptr; };
    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics>) };
    inline vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics>) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& setMetrics(const vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& setMetrics(vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleMetric& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics>> metrics_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
