// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOMMENDSCALINGRULE_HPP_
#define ALIBABACLOUD_MODELS_RECOMMENDSCALINGRULE_HPP_
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
  class RecommendScalingRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecommendScalingRule& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxSave, maxSave_);
      DARABONBA_PTR_TO_JSON(MetricsTrigger, metricsTrigger_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TimeTrigger, timeTrigger_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, RecommendScalingRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxSave, maxSave_);
      DARABONBA_PTR_FROM_JSON(MetricsTrigger, metricsTrigger_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TimeTrigger, timeTrigger_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    RecommendScalingRule() = default ;
    RecommendScalingRule(const RecommendScalingRule &) = default ;
    RecommendScalingRule(RecommendScalingRule &&) = default ;
    RecommendScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecommendScalingRule() = default ;
    RecommendScalingRule& operator=(const RecommendScalingRule &) = default ;
    RecommendScalingRule& operator=(RecommendScalingRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityType_ != nullptr
        && this->adjustmentValue_ != nullptr && this->instanceType_ != nullptr && this->maxSave_ != nullptr && this->metricsTrigger_ != nullptr && this->ruleName_ != nullptr
        && this->timeTrigger_ != nullptr && this->triggerType_ != nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string activityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline RecommendScalingRule& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline RecommendScalingRule& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline RecommendScalingRule& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxSave Field Functions 
    bool hasMaxSave() const { return this->maxSave_ != nullptr;};
    void deleteMaxSave() { this->maxSave_ = nullptr;};
    inline float maxSave() const { DARABONBA_PTR_GET_DEFAULT(maxSave_, 0.0) };
    inline RecommendScalingRule& setMaxSave(float maxSave) { DARABONBA_PTR_SET_VALUE(maxSave_, maxSave) };


    // metricsTrigger Field Functions 
    bool hasMetricsTrigger() const { return this->metricsTrigger_ != nullptr;};
    void deleteMetricsTrigger() { this->metricsTrigger_ = nullptr;};
    inline const MetricsTrigger & metricsTrigger() const { DARABONBA_PTR_GET_CONST(metricsTrigger_, MetricsTrigger) };
    inline MetricsTrigger metricsTrigger() { DARABONBA_PTR_GET(metricsTrigger_, MetricsTrigger) };
    inline RecommendScalingRule& setMetricsTrigger(const MetricsTrigger & metricsTrigger) { DARABONBA_PTR_SET_VALUE(metricsTrigger_, metricsTrigger) };
    inline RecommendScalingRule& setMetricsTrigger(MetricsTrigger && metricsTrigger) { DARABONBA_PTR_SET_RVALUE(metricsTrigger_, metricsTrigger) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline RecommendScalingRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // timeTrigger Field Functions 
    bool hasTimeTrigger() const { return this->timeTrigger_ != nullptr;};
    void deleteTimeTrigger() { this->timeTrigger_ = nullptr;};
    inline const TimeTrigger & timeTrigger() const { DARABONBA_PTR_GET_CONST(timeTrigger_, TimeTrigger) };
    inline TimeTrigger timeTrigger() { DARABONBA_PTR_GET(timeTrigger_, TimeTrigger) };
    inline RecommendScalingRule& setTimeTrigger(const TimeTrigger & timeTrigger) { DARABONBA_PTR_SET_VALUE(timeTrigger_, timeTrigger) };
    inline RecommendScalingRule& setTimeTrigger(TimeTrigger && timeTrigger) { DARABONBA_PTR_SET_RVALUE(timeTrigger_, timeTrigger) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline RecommendScalingRule& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


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
    // 推荐的规格类型。
    std::shared_ptr<string> instanceType_ = nullptr;
    // 最大节约成本。
    std::shared_ptr<float> maxSave_ = nullptr;
    // 按照负载伸缩描述。
    // <p>
    std::shared_ptr<MetricsTrigger> metricsTrigger_ = nullptr;
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
