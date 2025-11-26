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
        && return this->adjustmentValue_ == nullptr && return this->metricsTrigger_ == nullptr && return this->minAdjustmentValue_ == nullptr && return this->ruleName_ == nullptr && return this->timeTrigger_ == nullptr
        && return this->triggerType_ == nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string activityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline ScalingRule& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScalingRule& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // metricsTrigger Field Functions 
    bool hasMetricsTrigger() const { return this->metricsTrigger_ != nullptr;};
    void deleteMetricsTrigger() { this->metricsTrigger_ = nullptr;};
    inline const MetricsTrigger & metricsTrigger() const { DARABONBA_PTR_GET_CONST(metricsTrigger_, MetricsTrigger) };
    inline MetricsTrigger metricsTrigger() { DARABONBA_PTR_GET(metricsTrigger_, MetricsTrigger) };
    inline ScalingRule& setMetricsTrigger(const MetricsTrigger & metricsTrigger) { DARABONBA_PTR_SET_VALUE(metricsTrigger_, metricsTrigger) };
    inline ScalingRule& setMetricsTrigger(MetricsTrigger && metricsTrigger) { DARABONBA_PTR_SET_RVALUE(metricsTrigger_, metricsTrigger) };


    // minAdjustmentValue Field Functions 
    bool hasMinAdjustmentValue() const { return this->minAdjustmentValue_ != nullptr;};
    void deleteMinAdjustmentValue() { this->minAdjustmentValue_ = nullptr;};
    inline int32_t minAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentValue_, 0) };
    inline ScalingRule& setMinAdjustmentValue(int32_t minAdjustmentValue) { DARABONBA_PTR_SET_VALUE(minAdjustmentValue_, minAdjustmentValue) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ScalingRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // timeTrigger Field Functions 
    bool hasTimeTrigger() const { return this->timeTrigger_ != nullptr;};
    void deleteTimeTrigger() { this->timeTrigger_ = nullptr;};
    inline const TimeTrigger & timeTrigger() const { DARABONBA_PTR_GET_CONST(timeTrigger_, TimeTrigger) };
    inline TimeTrigger timeTrigger() { DARABONBA_PTR_GET(timeTrigger_, TimeTrigger) };
    inline ScalingRule& setTimeTrigger(const TimeTrigger & timeTrigger) { DARABONBA_PTR_SET_VALUE(timeTrigger_, timeTrigger) };
    inline ScalingRule& setTimeTrigger(TimeTrigger && timeTrigger) { DARABONBA_PTR_SET_RVALUE(timeTrigger_, timeTrigger) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ScalingRule& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // 伸缩活动类型。取值范围：
    // - SCALE_OUT：扩容。
    // - SCALE_IN：缩容。
    // 
    // This parameter is required.
    std::shared_ptr<string> activityType_ = nullptr;
    // 调整值。需要为正数，代表需要扩容或者缩容的实例数量。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // 按照负载伸缩描述。
    // <p>
    std::shared_ptr<MetricsTrigger> metricsTrigger_ = nullptr;
    std::shared_ptr<int32_t> minAdjustmentValue_ = nullptr;
    // 规则名称。
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // 按照时间伸缩描述。
    // <p>
    std::shared_ptr<TimeTrigger> timeTrigger_ = nullptr;
    // 伸缩规则类型。 取值范围：
    // - TIME_TRIGGER: 按时间伸缩。
    // - METRICS_TRIGGER: 按负载伸缩。
    // 
    // This parameter is required.
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
