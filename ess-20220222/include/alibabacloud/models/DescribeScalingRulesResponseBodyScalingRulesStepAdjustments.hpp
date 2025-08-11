// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULESSTEPADJUSTMENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULESSTEPADJUSTMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingRulesResponseBodyScalingRulesStepAdjustments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingRulesResponseBodyScalingRulesStepAdjustments& obj) { 
      DARABONBA_PTR_TO_JSON(MetricIntervalLowerBound, metricIntervalLowerBound_);
      DARABONBA_PTR_TO_JSON(MetricIntervalUpperBound, metricIntervalUpperBound_);
      DARABONBA_PTR_TO_JSON(ScalingAdjustment, scalingAdjustment_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingRulesResponseBodyScalingRulesStepAdjustments& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricIntervalLowerBound, metricIntervalLowerBound_);
      DARABONBA_PTR_FROM_JSON(MetricIntervalUpperBound, metricIntervalUpperBound_);
      DARABONBA_PTR_FROM_JSON(ScalingAdjustment, scalingAdjustment_);
    };
    DescribeScalingRulesResponseBodyScalingRulesStepAdjustments() = default ;
    DescribeScalingRulesResponseBodyScalingRulesStepAdjustments(const DescribeScalingRulesResponseBodyScalingRulesStepAdjustments &) = default ;
    DescribeScalingRulesResponseBodyScalingRulesStepAdjustments(DescribeScalingRulesResponseBodyScalingRulesStepAdjustments &&) = default ;
    DescribeScalingRulesResponseBodyScalingRulesStepAdjustments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingRulesResponseBodyScalingRulesStepAdjustments() = default ;
    DescribeScalingRulesResponseBodyScalingRulesStepAdjustments& operator=(const DescribeScalingRulesResponseBodyScalingRulesStepAdjustments &) = default ;
    DescribeScalingRulesResponseBodyScalingRulesStepAdjustments& operator=(DescribeScalingRulesResponseBodyScalingRulesStepAdjustments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricIntervalLowerBound_ != nullptr
        && this->metricIntervalUpperBound_ != nullptr && this->scalingAdjustment_ != nullptr; };
    // metricIntervalLowerBound Field Functions 
    bool hasMetricIntervalLowerBound() const { return this->metricIntervalLowerBound_ != nullptr;};
    void deleteMetricIntervalLowerBound() { this->metricIntervalLowerBound_ = nullptr;};
    inline float metricIntervalLowerBound() const { DARABONBA_PTR_GET_DEFAULT(metricIntervalLowerBound_, 0.0) };
    inline DescribeScalingRulesResponseBodyScalingRulesStepAdjustments& setMetricIntervalLowerBound(float metricIntervalLowerBound) { DARABONBA_PTR_SET_VALUE(metricIntervalLowerBound_, metricIntervalLowerBound) };


    // metricIntervalUpperBound Field Functions 
    bool hasMetricIntervalUpperBound() const { return this->metricIntervalUpperBound_ != nullptr;};
    void deleteMetricIntervalUpperBound() { this->metricIntervalUpperBound_ = nullptr;};
    inline float metricIntervalUpperBound() const { DARABONBA_PTR_GET_DEFAULT(metricIntervalUpperBound_, 0.0) };
    inline DescribeScalingRulesResponseBodyScalingRulesStepAdjustments& setMetricIntervalUpperBound(float metricIntervalUpperBound) { DARABONBA_PTR_SET_VALUE(metricIntervalUpperBound_, metricIntervalUpperBound) };


    // scalingAdjustment Field Functions 
    bool hasScalingAdjustment() const { return this->scalingAdjustment_ != nullptr;};
    void deleteScalingAdjustment() { this->scalingAdjustment_ = nullptr;};
    inline int32_t scalingAdjustment() const { DARABONBA_PTR_GET_DEFAULT(scalingAdjustment_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRulesStepAdjustments& setScalingAdjustment(int32_t scalingAdjustment) { DARABONBA_PTR_SET_VALUE(scalingAdjustment_, scalingAdjustment) };


  protected:
    // The lower limit of a step adjustment. Valid values: -9.999999E18 to 9.999999E18.
    std::shared_ptr<float> metricIntervalLowerBound_ = nullptr;
    // The upper limit of a step adjustment. Valid values: -9.999999E18 to 9.999999E18.
    std::shared_ptr<float> metricIntervalUpperBound_ = nullptr;
    // The number of ECS instances that are scaled in a step adjustment.
    std::shared_ptr<int32_t> scalingAdjustment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
