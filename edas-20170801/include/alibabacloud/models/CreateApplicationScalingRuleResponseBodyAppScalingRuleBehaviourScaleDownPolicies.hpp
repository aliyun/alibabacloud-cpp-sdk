// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOURSCALEDOWNPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOURSCALEDOWNPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies() = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies(const CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies &) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies(CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies &&) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies() = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies& operator=(const CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies &) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies& operator=(CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies &&) = default ;
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
    inline CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The period during which the check is performed. Valid values: 0 to 1800. Unit: seconds.
    std::shared_ptr<int32_t> periodSeconds_ = nullptr;
    // The type of the policy. The value can be Pods or Percent.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the auto scaling policy. The value of this parameter is an integer greater than 0. If the policy type is Pods, the value indicates the number of pods. If the policy type is Percent, the value indicates a percentage. The value is allowed to exceed 100%.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
