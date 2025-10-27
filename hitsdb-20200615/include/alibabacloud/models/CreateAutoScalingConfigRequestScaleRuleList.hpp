// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSCALINGCONFIGREQUESTSCALERULELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSCALINGCONFIGREQUESTSCALERULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class CreateAutoScalingConfigRequestScaleRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoScalingConfigRequestScaleRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ObservationWindow, observationWindow_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScaleInStep, scaleInStep_);
      DARABONBA_PTR_TO_JSON(ScaleOutStep, scaleOutStep_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetMetric, targetMetric_);
      DARABONBA_PTR_TO_JSON(TargetNodes, targetNodes_);
      DARABONBA_PTR_TO_JSON(ThresholdLower, thresholdLower_);
      DARABONBA_PTR_TO_JSON(ThresholdUpper, thresholdUpper_);
      DARABONBA_PTR_TO_JSON(TriggerCronExpr, triggerCronExpr_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoScalingConfigRequestScaleRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ObservationWindow, observationWindow_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScaleInStep, scaleInStep_);
      DARABONBA_PTR_FROM_JSON(ScaleOutStep, scaleOutStep_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetMetric, targetMetric_);
      DARABONBA_PTR_FROM_JSON(TargetNodes, targetNodes_);
      DARABONBA_PTR_FROM_JSON(ThresholdLower, thresholdLower_);
      DARABONBA_PTR_FROM_JSON(ThresholdUpper, thresholdUpper_);
      DARABONBA_PTR_FROM_JSON(TriggerCronExpr, triggerCronExpr_);
    };
    CreateAutoScalingConfigRequestScaleRuleList() = default ;
    CreateAutoScalingConfigRequestScaleRuleList(const CreateAutoScalingConfigRequestScaleRuleList &) = default ;
    CreateAutoScalingConfigRequestScaleRuleList(CreateAutoScalingConfigRequestScaleRuleList &&) = default ;
    CreateAutoScalingConfigRequestScaleRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoScalingConfigRequestScaleRuleList() = default ;
    CreateAutoScalingConfigRequestScaleRuleList& operator=(const CreateAutoScalingConfigRequestScaleRuleList &) = default ;
    CreateAutoScalingConfigRequestScaleRuleList& operator=(CreateAutoScalingConfigRequestScaleRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->enabled_ == nullptr && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->observationWindow_ == nullptr && return this->operationType_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->ruleType_ == nullptr && return this->scaleInStep_ == nullptr && return this->scaleOutStep_ == nullptr
        && return this->silenceTime_ == nullptr && return this->startTime_ == nullptr && return this->targetMetric_ == nullptr && return this->targetNodes_ == nullptr && return this->thresholdLower_ == nullptr
        && return this->thresholdUpper_ == nullptr && return this->triggerCronExpr_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // observationWindow Field Functions 
    bool hasObservationWindow() const { return this->observationWindow_ != nullptr;};
    void deleteObservationWindow() { this->observationWindow_ = nullptr;};
    inline int32_t observationWindow() const { DARABONBA_PTR_GET_DEFAULT(observationWindow_, 0) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setObservationWindow(int32_t observationWindow) { DARABONBA_PTR_SET_VALUE(observationWindow_, observationWindow) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scaleInStep Field Functions 
    bool hasScaleInStep() const { return this->scaleInStep_ != nullptr;};
    void deleteScaleInStep() { this->scaleInStep_ = nullptr;};
    inline int32_t scaleInStep() const { DARABONBA_PTR_GET_DEFAULT(scaleInStep_, 0) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setScaleInStep(int32_t scaleInStep) { DARABONBA_PTR_SET_VALUE(scaleInStep_, scaleInStep) };


    // scaleOutStep Field Functions 
    bool hasScaleOutStep() const { return this->scaleOutStep_ != nullptr;};
    void deleteScaleOutStep() { this->scaleOutStep_ = nullptr;};
    inline int32_t scaleOutStep() const { DARABONBA_PTR_GET_DEFAULT(scaleOutStep_, 0) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setScaleOutStep(int32_t scaleOutStep) { DARABONBA_PTR_SET_VALUE(scaleOutStep_, scaleOutStep) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetMetric Field Functions 
    bool hasTargetMetric() const { return this->targetMetric_ != nullptr;};
    void deleteTargetMetric() { this->targetMetric_ = nullptr;};
    inline string targetMetric() const { DARABONBA_PTR_GET_DEFAULT(targetMetric_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setTargetMetric(string targetMetric) { DARABONBA_PTR_SET_VALUE(targetMetric_, targetMetric) };


    // targetNodes Field Functions 
    bool hasTargetNodes() const { return this->targetNodes_ != nullptr;};
    void deleteTargetNodes() { this->targetNodes_ = nullptr;};
    inline int32_t targetNodes() const { DARABONBA_PTR_GET_DEFAULT(targetNodes_, 0) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setTargetNodes(int32_t targetNodes) { DARABONBA_PTR_SET_VALUE(targetNodes_, targetNodes) };


    // thresholdLower Field Functions 
    bool hasThresholdLower() const { return this->thresholdLower_ != nullptr;};
    void deleteThresholdLower() { this->thresholdLower_ = nullptr;};
    inline int32_t thresholdLower() const { DARABONBA_PTR_GET_DEFAULT(thresholdLower_, 0) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setThresholdLower(int32_t thresholdLower) { DARABONBA_PTR_SET_VALUE(thresholdLower_, thresholdLower) };


    // thresholdUpper Field Functions 
    bool hasThresholdUpper() const { return this->thresholdUpper_ != nullptr;};
    void deleteThresholdUpper() { this->thresholdUpper_ = nullptr;};
    inline int32_t thresholdUpper() const { DARABONBA_PTR_GET_DEFAULT(thresholdUpper_, 0) };
    inline CreateAutoScalingConfigRequestScaleRuleList& setThresholdUpper(int32_t thresholdUpper) { DARABONBA_PTR_SET_VALUE(thresholdUpper_, thresholdUpper) };


    // triggerCronExpr Field Functions 
    bool hasTriggerCronExpr() const { return this->triggerCronExpr_ != nullptr;};
    void deleteTriggerCronExpr() { this->triggerCronExpr_ = nullptr;};
    inline string triggerCronExpr() const { DARABONBA_PTR_GET_DEFAULT(triggerCronExpr_, "") };
    inline CreateAutoScalingConfigRequestScaleRuleList& setTriggerCronExpr(string triggerCronExpr) { DARABONBA_PTR_SET_VALUE(triggerCronExpr_, triggerCronExpr) };


  protected:
    std::shared_ptr<string> configId_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> observationWindow_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<int32_t> scaleInStep_ = nullptr;
    std::shared_ptr<int32_t> scaleOutStep_ = nullptr;
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> targetMetric_ = nullptr;
    std::shared_ptr<int32_t> targetNodes_ = nullptr;
    std::shared_ptr<int32_t> thresholdLower_ = nullptr;
    std::shared_ptr<int32_t> thresholdUpper_ = nullptr;
    std::shared_ptr<string> triggerCronExpr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
