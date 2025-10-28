// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEMETRICMETRICS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEMETRICMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
    };
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics(UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics &&) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics& operator=(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics& operator=(UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricTargetAverageUtilization_ == nullptr
        && return this->metricType_ == nullptr; };
    // metricTargetAverageUtilization Field Functions 
    bool hasMetricTargetAverageUtilization() const { return this->metricTargetAverageUtilization_ != nullptr;};
    void deleteMetricTargetAverageUtilization() { this->metricTargetAverageUtilization_ = nullptr;};
    inline int32_t metricTargetAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(metricTargetAverageUtilization_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics& setMetricTargetAverageUtilization(int32_t metricTargetAverageUtilization) { DARABONBA_PTR_SET_VALUE(metricTargetAverageUtilization_, metricTargetAverageUtilization) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleMetricMetrics& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<int32_t> metricTargetAverageUtilization_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> metricType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
