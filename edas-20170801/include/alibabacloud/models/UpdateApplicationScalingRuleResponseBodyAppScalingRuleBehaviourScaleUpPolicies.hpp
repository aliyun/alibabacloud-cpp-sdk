// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOURSCALEUPPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOURSCALEUPPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies(UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies &&) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies& operator=(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies& operator=(UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->periodSeconds_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t periodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUpPolicies& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The cycle of the policy check. Valid values: 0 to 1800. Unit: seconds.
    std::shared_ptr<int32_t> periodSeconds_ = nullptr;
    // The type of the policy. Valid values: Pods and Percent.
    std::shared_ptr<string> type_ = nullptr;
    // The policy value of auto scaling. Set the value to an integer greater than zero. If the policy type is Pods, the value of this parameter indicates the number of pods. If the policy type is Percent, the value of this parameter indicates a percentage, which can exceed 100%.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
