// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICSCALEUPRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICSCALEUPRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules& obj) { 
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
      DARABONBA_PTR_TO_JSON(Step, step_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
    };
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules &&) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules& operator=(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules& operator=(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disabled_ != nullptr
        && this->stabilizationWindowSeconds_ != nullptr && this->step_ != nullptr; };
    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // stabilizationWindowSeconds Field Functions 
    bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
    void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
    inline int64_t stabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules& setStabilizationWindowSeconds(int64_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int64_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricScaleUpRules& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // Indicates whether the application scale-in was disabled. Valid values:
    // 
    // *   **true**: The application scale-in was disabled.
    // *   **false**: The application scale-in was enabled.
    // 
    // >  When this parameter is set to true, the application instances will never be reduced. This prevents risks to your business in peak hours. By default, this parameter is set to false.
    std::shared_ptr<bool> disabled_ = nullptr;
    // The cooldown time of the scale-out. Valid values: 0 to 3600. Unit: seconds. The default value is 0.
    std::shared_ptr<int64_t> stabilizationWindowSeconds_ = nullptr;
    // The step size for the scale-out. The maximum number of instances that can be added in a unit of time.
    std::shared_ptr<int64_t> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
