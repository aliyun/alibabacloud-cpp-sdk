// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODYSCALINGPOLICYSCALINGRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODYSCALINGPOLICYSCALINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetricsTrigger.hpp>
#include <alibabacloud/models/TimeTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(MetricsTrigger, metricsTrigger_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TimeTrigger, timeTrigger_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(MetricsTrigger, metricsTrigger_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TimeTrigger, timeTrigger_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules() = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules(const GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules &) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules(GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules &&) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules() = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& operator=(const GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules &) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& operator=(GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityType_ != nullptr
        && this->adjustmentType_ != nullptr && this->adjustmentValue_ != nullptr && this->metricsTrigger_ != nullptr && this->ruleName_ != nullptr && this->timeTrigger_ != nullptr
        && this->triggerType_ != nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string activityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string adjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // metricsTrigger Field Functions 
    bool hasMetricsTrigger() const { return this->metricsTrigger_ != nullptr;};
    void deleteMetricsTrigger() { this->metricsTrigger_ = nullptr;};
    inline const Models::MetricsTrigger & metricsTrigger() const { DARABONBA_PTR_GET_CONST(metricsTrigger_, Models::MetricsTrigger) };
    inline Models::MetricsTrigger metricsTrigger() { DARABONBA_PTR_GET(metricsTrigger_, Models::MetricsTrigger) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setMetricsTrigger(const Models::MetricsTrigger & metricsTrigger) { DARABONBA_PTR_SET_VALUE(metricsTrigger_, metricsTrigger) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setMetricsTrigger(Models::MetricsTrigger && metricsTrigger) { DARABONBA_PTR_SET_RVALUE(metricsTrigger_, metricsTrigger) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // timeTrigger Field Functions 
    bool hasTimeTrigger() const { return this->timeTrigger_ != nullptr;};
    void deleteTimeTrigger() { this->timeTrigger_ = nullptr;};
    inline const Models::TimeTrigger & timeTrigger() const { DARABONBA_PTR_GET_CONST(timeTrigger_, Models::TimeTrigger) };
    inline Models::TimeTrigger timeTrigger() { DARABONBA_PTR_GET(timeTrigger_, Models::TimeTrigger) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setTimeTrigger(const Models::TimeTrigger & timeTrigger) { DARABONBA_PTR_SET_VALUE(timeTrigger_, timeTrigger) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setTimeTrigger(Models::TimeTrigger && timeTrigger) { DARABONBA_PTR_SET_RVALUE(timeTrigger_, timeTrigger) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The scaling type. Valid values:
    // 
    // *   SCALE_OUT
    // *   SCALE_IN
    std::shared_ptr<string> activityType_ = nullptr;
    // The adjustment type.
    std::shared_ptr<string> adjustmentType_ = nullptr;
    // The adjustment value. The parameter value must be a positive integer, which indicates the number of instances that you want to add or remove.
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // The description of load-based scaling.
    std::shared_ptr<Models::MetricsTrigger> metricsTrigger_ = nullptr;
    // The name of the auto scaling rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The description of time-based scaling.
    std::shared_ptr<Models::TimeTrigger> timeTrigger_ = nullptr;
    // The type of the auto scaling rule. Valid values:
    // 
    // *   TIME_TRIGGER: time-based scaling
    // *   METRICS_TRIGGER: load-based scaling
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
