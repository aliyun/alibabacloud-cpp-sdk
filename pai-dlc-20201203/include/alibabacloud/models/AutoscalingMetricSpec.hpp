// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGMETRICSPEC_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGMETRICSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class AutoscalingMetricSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoscalingMetricSpec& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_TO_JSON(Tolerance, tolerance_);
    };
    friend void from_json(const Darabonba::Json& j, AutoscalingMetricSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_FROM_JSON(Tolerance, tolerance_);
    };
    AutoscalingMetricSpec() = default ;
    AutoscalingMetricSpec(const AutoscalingMetricSpec &) = default ;
    AutoscalingMetricSpec(AutoscalingMetricSpec &&) = default ;
    AutoscalingMetricSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoscalingMetricSpec() = default ;
    AutoscalingMetricSpec& operator=(const AutoscalingMetricSpec &) = default ;
    AutoscalingMetricSpec& operator=(AutoscalingMetricSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricName_ == nullptr
        && this->stabilizationWindowSeconds_ == nullptr && this->targetValue_ == nullptr && this->tolerance_ == nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline AutoscalingMetricSpec& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // stabilizationWindowSeconds Field Functions 
    bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
    void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
    inline int32_t getStabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
    inline AutoscalingMetricSpec& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline int32_t getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0) };
    inline AutoscalingMetricSpec& setTargetValue(int32_t targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // tolerance Field Functions 
    bool hasTolerance() const { return this->tolerance_ != nullptr;};
    void deleteTolerance() { this->tolerance_ = nullptr;};
    inline string getTolerance() const { DARABONBA_PTR_GET_DEFAULT(tolerance_, "") };
    inline AutoscalingMetricSpec& setTolerance(string tolerance) { DARABONBA_PTR_SET_VALUE(tolerance_, tolerance) };


  protected:
    // The name of the metric for autoscaling. This can be a predefined or a custom metric.
    shared_ptr<string> metricName_ {};
    // The cooldown period, in seconds, after a scaling activity. This prevents the service from initiating another scaling action before the effects of the previous one are observable, stabilizing resource fluctuations.
    shared_ptr<int32_t> stabilizationWindowSeconds_ {};
    // The target value for the specified metric. The autoscaling service tries to maintain the metric at or near this value.
    shared_ptr<int32_t> targetValue_ {};
    // The acceptable deviation from the `TargetValue`, specified as a percentage string. A scaling action is triggered only if the metric value moves outside the range defined by the `TargetValue` and this tolerance. This prevents scaling actions based on minor fluctuations.
    shared_ptr<string> tolerance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
