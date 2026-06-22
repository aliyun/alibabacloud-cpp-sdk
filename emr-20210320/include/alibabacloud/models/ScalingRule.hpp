// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGRULE_HPP_
#define ALIBABACLOUD_MODELS_SCALINGRULE_HPP_
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
  class ScalingRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingRule& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(MetricsTrigger, metricsTrigger_);
      DARABONBA_PTR_TO_JSON(MinAdjustmentValue, minAdjustmentValue_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TimeTrigger, timeTrigger_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(MetricsTrigger, metricsTrigger_);
      DARABONBA_PTR_FROM_JSON(MinAdjustmentValue, minAdjustmentValue_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TimeTrigger, timeTrigger_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    ScalingRule() = default ;
    ScalingRule(const ScalingRule &) = default ;
    ScalingRule(ScalingRule &&) = default ;
    ScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingRule() = default ;
    ScalingRule& operator=(const ScalingRule &) = default ;
    ScalingRule& operator=(ScalingRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityType_ == nullptr
        && this->adjustmentValue_ == nullptr && this->metricsTrigger_ == nullptr && this->minAdjustmentValue_ == nullptr && this->ruleName_ == nullptr && this->timeTrigger_ == nullptr
        && this->triggerType_ == nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline ScalingRule& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScalingRule& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // metricsTrigger Field Functions 
    bool hasMetricsTrigger() const { return this->metricsTrigger_ != nullptr;};
    void deleteMetricsTrigger() { this->metricsTrigger_ = nullptr;};
    inline const MetricsTrigger & getMetricsTrigger() const { DARABONBA_PTR_GET_CONST(metricsTrigger_, MetricsTrigger) };
    inline MetricsTrigger getMetricsTrigger() { DARABONBA_PTR_GET(metricsTrigger_, MetricsTrigger) };
    inline ScalingRule& setMetricsTrigger(const MetricsTrigger & metricsTrigger) { DARABONBA_PTR_SET_VALUE(metricsTrigger_, metricsTrigger) };
    inline ScalingRule& setMetricsTrigger(MetricsTrigger && metricsTrigger) { DARABONBA_PTR_SET_RVALUE(metricsTrigger_, metricsTrigger) };


    // minAdjustmentValue Field Functions 
    bool hasMinAdjustmentValue() const { return this->minAdjustmentValue_ != nullptr;};
    void deleteMinAdjustmentValue() { this->minAdjustmentValue_ = nullptr;};
    inline int32_t getMinAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentValue_, 0) };
    inline ScalingRule& setMinAdjustmentValue(int32_t minAdjustmentValue) { DARABONBA_PTR_SET_VALUE(minAdjustmentValue_, minAdjustmentValue) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ScalingRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // timeTrigger Field Functions 
    bool hasTimeTrigger() const { return this->timeTrigger_ != nullptr;};
    void deleteTimeTrigger() { this->timeTrigger_ = nullptr;};
    inline const TimeTrigger & getTimeTrigger() const { DARABONBA_PTR_GET_CONST(timeTrigger_, TimeTrigger) };
    inline TimeTrigger getTimeTrigger() { DARABONBA_PTR_GET(timeTrigger_, TimeTrigger) };
    inline ScalingRule& setTimeTrigger(const TimeTrigger & timeTrigger) { DARABONBA_PTR_SET_VALUE(timeTrigger_, timeTrigger) };
    inline ScalingRule& setTimeTrigger(TimeTrigger && timeTrigger) { DARABONBA_PTR_SET_RVALUE(timeTrigger_, timeTrigger) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ScalingRule& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The type of the scaling activity. This parameter is required. Valid values:
    // 
    // - SCALE_OUT: scale-out.
    // 
    // - SCALE_IN: scale-in.
    // 
    // This parameter is required.
    shared_ptr<string> activityType_ {};
    // The adjustment value. This parameter is required and must be a positive integer. It specifies the number of instances to add for a scale-out activity or remove for a scale-in activity.
    // 
    // This parameter is required.
    shared_ptr<int32_t> adjustmentValue_ {};
    // The configurations for load-based scaling.
    shared_ptr<MetricsTrigger> metricsTrigger_ {};
    // The minimum number of instances to add during a scale-out activity.
    shared_ptr<int32_t> minAdjustmentValue_ {};
    // The name of the rule. This parameter is required and cannot be an empty string.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The configurations for time-based scaling.
    shared_ptr<TimeTrigger> timeTrigger_ {};
    // The type of the scaling rule. This parameter is required. Valid values:
    // 
    // - TIME_TRIGGER: time-based scaling.
    // 
    // - METRICS_TRIGGER: load-based scaling.
    // 
    // This parameter is required.
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
