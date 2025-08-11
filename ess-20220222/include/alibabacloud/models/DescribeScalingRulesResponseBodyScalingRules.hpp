// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions.hpp>
#include <alibabacloud/models/DescribeScalingRulesResponseBodyScalingRulesAlarms.hpp>
#include <alibabacloud/models/DescribeScalingRulesResponseBodyScalingRulesHybridMetrics.hpp>
#include <alibabacloud/models/DescribeScalingRulesResponseBodyScalingRulesStepAdjustments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingRulesResponseBodyScalingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingRulesResponseBodyScalingRules& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(AlarmDimensions, alarmDimensions_);
      DARABONBA_PTR_TO_JSON(Alarms, alarms_);
      DARABONBA_PTR_TO_JSON(Cooldown, cooldown_);
      DARABONBA_PTR_TO_JSON(DisableScaleIn, disableScaleIn_);
      DARABONBA_PTR_TO_JSON(EstimatedInstanceWarmup, estimatedInstanceWarmup_);
      DARABONBA_PTR_TO_JSON(HybridMetrics, hybridMetrics_);
      DARABONBA_PTR_TO_JSON(HybridMonitorNamespace, hybridMonitorNamespace_);
      DARABONBA_PTR_TO_JSON(InitialMaxSize, initialMaxSize_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_TO_JSON(MinSize, minSize_);
      DARABONBA_PTR_TO_JSON(PredictiveScalingMode, predictiveScalingMode_);
      DARABONBA_PTR_TO_JSON(PredictiveTaskBufferTime, predictiveTaskBufferTime_);
      DARABONBA_PTR_TO_JSON(PredictiveValueBehavior, predictiveValueBehavior_);
      DARABONBA_PTR_TO_JSON(PredictiveValueBuffer, predictiveValueBuffer_);
      DARABONBA_PTR_TO_JSON(ScaleInEvaluationCount, scaleInEvaluationCount_);
      DARABONBA_PTR_TO_JSON(ScaleOutEvaluationCount, scaleOutEvaluationCount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleAri, scalingRuleAri_);
      DARABONBA_PTR_TO_JSON(ScalingRuleId, scalingRuleId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
      DARABONBA_PTR_TO_JSON(StepAdjustments, stepAdjustments_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingRulesResponseBodyScalingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(AlarmDimensions, alarmDimensions_);
      DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
      DARABONBA_PTR_FROM_JSON(Cooldown, cooldown_);
      DARABONBA_PTR_FROM_JSON(DisableScaleIn, disableScaleIn_);
      DARABONBA_PTR_FROM_JSON(EstimatedInstanceWarmup, estimatedInstanceWarmup_);
      DARABONBA_PTR_FROM_JSON(HybridMetrics, hybridMetrics_);
      DARABONBA_PTR_FROM_JSON(HybridMonitorNamespace, hybridMonitorNamespace_);
      DARABONBA_PTR_FROM_JSON(InitialMaxSize, initialMaxSize_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
      DARABONBA_PTR_FROM_JSON(PredictiveScalingMode, predictiveScalingMode_);
      DARABONBA_PTR_FROM_JSON(PredictiveTaskBufferTime, predictiveTaskBufferTime_);
      DARABONBA_PTR_FROM_JSON(PredictiveValueBehavior, predictiveValueBehavior_);
      DARABONBA_PTR_FROM_JSON(PredictiveValueBuffer, predictiveValueBuffer_);
      DARABONBA_PTR_FROM_JSON(ScaleInEvaluationCount, scaleInEvaluationCount_);
      DARABONBA_PTR_FROM_JSON(ScaleOutEvaluationCount, scaleOutEvaluationCount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleAri, scalingRuleAri_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleId, scalingRuleId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
      DARABONBA_PTR_FROM_JSON(StepAdjustments, stepAdjustments_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    DescribeScalingRulesResponseBodyScalingRules() = default ;
    DescribeScalingRulesResponseBodyScalingRules(const DescribeScalingRulesResponseBodyScalingRules &) = default ;
    DescribeScalingRulesResponseBodyScalingRules(DescribeScalingRulesResponseBodyScalingRules &&) = default ;
    DescribeScalingRulesResponseBodyScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingRulesResponseBodyScalingRules() = default ;
    DescribeScalingRulesResponseBodyScalingRules& operator=(const DescribeScalingRulesResponseBodyScalingRules &) = default ;
    DescribeScalingRulesResponseBodyScalingRules& operator=(DescribeScalingRulesResponseBodyScalingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustmentType_ != nullptr
        && this->adjustmentValue_ != nullptr && this->alarmDimensions_ != nullptr && this->alarms_ != nullptr && this->cooldown_ != nullptr && this->disableScaleIn_ != nullptr
        && this->estimatedInstanceWarmup_ != nullptr && this->hybridMetrics_ != nullptr && this->hybridMonitorNamespace_ != nullptr && this->initialMaxSize_ != nullptr && this->maxSize_ != nullptr
        && this->metricName_ != nullptr && this->metricType_ != nullptr && this->minAdjustmentMagnitude_ != nullptr && this->minSize_ != nullptr && this->predictiveScalingMode_ != nullptr
        && this->predictiveTaskBufferTime_ != nullptr && this->predictiveValueBehavior_ != nullptr && this->predictiveValueBuffer_ != nullptr && this->scaleInEvaluationCount_ != nullptr && this->scaleOutEvaluationCount_ != nullptr
        && this->scalingGroupId_ != nullptr && this->scalingRuleAri_ != nullptr && this->scalingRuleId_ != nullptr && this->scalingRuleName_ != nullptr && this->scalingRuleType_ != nullptr
        && this->stepAdjustments_ != nullptr && this->targetValue_ != nullptr; };
    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string adjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // alarmDimensions Field Functions 
    bool hasAlarmDimensions() const { return this->alarmDimensions_ != nullptr;};
    void deleteAlarmDimensions() { this->alarmDimensions_ = nullptr;};
    inline const vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions> & alarmDimensions() const { DARABONBA_PTR_GET_CONST(alarmDimensions_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions>) };
    inline vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions> alarmDimensions() { DARABONBA_PTR_GET(alarmDimensions_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions>) };
    inline DescribeScalingRulesResponseBodyScalingRules& setAlarmDimensions(const vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions> & alarmDimensions) { DARABONBA_PTR_SET_VALUE(alarmDimensions_, alarmDimensions) };
    inline DescribeScalingRulesResponseBodyScalingRules& setAlarmDimensions(vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions> && alarmDimensions) { DARABONBA_PTR_SET_RVALUE(alarmDimensions_, alarmDimensions) };


    // alarms Field Functions 
    bool hasAlarms() const { return this->alarms_ != nullptr;};
    void deleteAlarms() { this->alarms_ = nullptr;};
    inline const vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarms> & alarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarms>) };
    inline vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarms> alarms() { DARABONBA_PTR_GET(alarms_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarms>) };
    inline DescribeScalingRulesResponseBodyScalingRules& setAlarms(const vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
    inline DescribeScalingRulesResponseBodyScalingRules& setAlarms(vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


    // cooldown Field Functions 
    bool hasCooldown() const { return this->cooldown_ != nullptr;};
    void deleteCooldown() { this->cooldown_ = nullptr;};
    inline int32_t cooldown() const { DARABONBA_PTR_GET_DEFAULT(cooldown_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setCooldown(int32_t cooldown) { DARABONBA_PTR_SET_VALUE(cooldown_, cooldown) };


    // disableScaleIn Field Functions 
    bool hasDisableScaleIn() const { return this->disableScaleIn_ != nullptr;};
    void deleteDisableScaleIn() { this->disableScaleIn_ = nullptr;};
    inline bool disableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(disableScaleIn_, false) };
    inline DescribeScalingRulesResponseBodyScalingRules& setDisableScaleIn(bool disableScaleIn) { DARABONBA_PTR_SET_VALUE(disableScaleIn_, disableScaleIn) };


    // estimatedInstanceWarmup Field Functions 
    bool hasEstimatedInstanceWarmup() const { return this->estimatedInstanceWarmup_ != nullptr;};
    void deleteEstimatedInstanceWarmup() { this->estimatedInstanceWarmup_ = nullptr;};
    inline int32_t estimatedInstanceWarmup() const { DARABONBA_PTR_GET_DEFAULT(estimatedInstanceWarmup_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setEstimatedInstanceWarmup(int32_t estimatedInstanceWarmup) { DARABONBA_PTR_SET_VALUE(estimatedInstanceWarmup_, estimatedInstanceWarmup) };


    // hybridMetrics Field Functions 
    bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
    void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
    inline const vector<Models::DescribeScalingRulesResponseBodyScalingRulesHybridMetrics> & hybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesHybridMetrics>) };
    inline vector<Models::DescribeScalingRulesResponseBodyScalingRulesHybridMetrics> hybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesHybridMetrics>) };
    inline DescribeScalingRulesResponseBodyScalingRules& setHybridMetrics(const vector<Models::DescribeScalingRulesResponseBodyScalingRulesHybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
    inline DescribeScalingRulesResponseBodyScalingRules& setHybridMetrics(vector<Models::DescribeScalingRulesResponseBodyScalingRulesHybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


    // hybridMonitorNamespace Field Functions 
    bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
    void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
    inline string hybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


    // initialMaxSize Field Functions 
    bool hasInitialMaxSize() const { return this->initialMaxSize_ != nullptr;};
    void deleteInitialMaxSize() { this->initialMaxSize_ = nullptr;};
    inline int32_t initialMaxSize() const { DARABONBA_PTR_GET_DEFAULT(initialMaxSize_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setInitialMaxSize(int32_t initialMaxSize) { DARABONBA_PTR_SET_VALUE(initialMaxSize_, initialMaxSize) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t minAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // predictiveScalingMode Field Functions 
    bool hasPredictiveScalingMode() const { return this->predictiveScalingMode_ != nullptr;};
    void deletePredictiveScalingMode() { this->predictiveScalingMode_ = nullptr;};
    inline string predictiveScalingMode() const { DARABONBA_PTR_GET_DEFAULT(predictiveScalingMode_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setPredictiveScalingMode(string predictiveScalingMode) { DARABONBA_PTR_SET_VALUE(predictiveScalingMode_, predictiveScalingMode) };


    // predictiveTaskBufferTime Field Functions 
    bool hasPredictiveTaskBufferTime() const { return this->predictiveTaskBufferTime_ != nullptr;};
    void deletePredictiveTaskBufferTime() { this->predictiveTaskBufferTime_ = nullptr;};
    inline int32_t predictiveTaskBufferTime() const { DARABONBA_PTR_GET_DEFAULT(predictiveTaskBufferTime_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setPredictiveTaskBufferTime(int32_t predictiveTaskBufferTime) { DARABONBA_PTR_SET_VALUE(predictiveTaskBufferTime_, predictiveTaskBufferTime) };


    // predictiveValueBehavior Field Functions 
    bool hasPredictiveValueBehavior() const { return this->predictiveValueBehavior_ != nullptr;};
    void deletePredictiveValueBehavior() { this->predictiveValueBehavior_ = nullptr;};
    inline string predictiveValueBehavior() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBehavior_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setPredictiveValueBehavior(string predictiveValueBehavior) { DARABONBA_PTR_SET_VALUE(predictiveValueBehavior_, predictiveValueBehavior) };


    // predictiveValueBuffer Field Functions 
    bool hasPredictiveValueBuffer() const { return this->predictiveValueBuffer_ != nullptr;};
    void deletePredictiveValueBuffer() { this->predictiveValueBuffer_ = nullptr;};
    inline int32_t predictiveValueBuffer() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBuffer_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setPredictiveValueBuffer(int32_t predictiveValueBuffer) { DARABONBA_PTR_SET_VALUE(predictiveValueBuffer_, predictiveValueBuffer) };


    // scaleInEvaluationCount Field Functions 
    bool hasScaleInEvaluationCount() const { return this->scaleInEvaluationCount_ != nullptr;};
    void deleteScaleInEvaluationCount() { this->scaleInEvaluationCount_ = nullptr;};
    inline int32_t scaleInEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleInEvaluationCount_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setScaleInEvaluationCount(int32_t scaleInEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleInEvaluationCount_, scaleInEvaluationCount) };


    // scaleOutEvaluationCount Field Functions 
    bool hasScaleOutEvaluationCount() const { return this->scaleOutEvaluationCount_ != nullptr;};
    void deleteScaleOutEvaluationCount() { this->scaleOutEvaluationCount_ = nullptr;};
    inline int32_t scaleOutEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleOutEvaluationCount_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setScaleOutEvaluationCount(int32_t scaleOutEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleOutEvaluationCount_, scaleOutEvaluationCount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingRuleAri Field Functions 
    bool hasScalingRuleAri() const { return this->scalingRuleAri_ != nullptr;};
    void deleteScalingRuleAri() { this->scalingRuleAri_ = nullptr;};
    inline string scalingRuleAri() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleAri_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setScalingRuleAri(string scalingRuleAri) { DARABONBA_PTR_SET_VALUE(scalingRuleAri_, scalingRuleAri) };


    // scalingRuleId Field Functions 
    bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
    void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
    inline string scalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string scalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline DescribeScalingRulesResponseBodyScalingRules& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


    // stepAdjustments Field Functions 
    bool hasStepAdjustments() const { return this->stepAdjustments_ != nullptr;};
    void deleteStepAdjustments() { this->stepAdjustments_ = nullptr;};
    inline const vector<Models::DescribeScalingRulesResponseBodyScalingRulesStepAdjustments> & stepAdjustments() const { DARABONBA_PTR_GET_CONST(stepAdjustments_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesStepAdjustments>) };
    inline vector<Models::DescribeScalingRulesResponseBodyScalingRulesStepAdjustments> stepAdjustments() { DARABONBA_PTR_GET(stepAdjustments_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesStepAdjustments>) };
    inline DescribeScalingRulesResponseBodyScalingRules& setStepAdjustments(const vector<Models::DescribeScalingRulesResponseBodyScalingRulesStepAdjustments> & stepAdjustments) { DARABONBA_PTR_SET_VALUE(stepAdjustments_, stepAdjustments) };
    inline DescribeScalingRulesResponseBodyScalingRules& setStepAdjustments(vector<Models::DescribeScalingRulesResponseBodyScalingRulesStepAdjustments> && stepAdjustments) { DARABONBA_PTR_SET_RVALUE(stepAdjustments_, stepAdjustments) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline float targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0.0) };
    inline DescribeScalingRulesResponseBodyScalingRules& setTargetValue(float targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The adjustment method of the scaling rule. Valid values:
    // 
    // *   QuantityChangeInCapacity: adds or removes the specified number of Elastic Compute Service (ECS) instances to or from the scaling group.
    // *   PercentChangeInCapacity: adds or removes the specified percentage of ECS instances to or from the scaling group.
    // *   TotalCapacity: adjusts the number of ECS instances in the scaling group to the specified number.
    std::shared_ptr<string> adjustmentType_ = nullptr;
    // The number of instances that must be scaled based on the scaling rule.
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // The dimensions. This parameter is applicable to target tracking scaling rules. You can specify this parameter if your predefined metric requires extra dimensions. For example, if you predefine the LoadBalancerRealServerAverageQps metric, you must use this parameter to specify the rulePool dimension.
    std::shared_ptr<vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmDimensions>> alarmDimensions_ = nullptr;
    // The event-triggered tasks that are associated with the scaling rule. The value of this parameter is returned only if you set ShowAlarmRules to true. Otherwise, null is returned.
    std::shared_ptr<vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarms>> alarms_ = nullptr;
    // The cooldown period of the scaling rule. This parameter is available only if you set ScalingRuleType to SimpleScalingRule. Valid values: 0 to 86400. Unit: seconds.
    std::shared_ptr<int32_t> cooldown_ = nullptr;
    // Indicates whether scale-in is disabled. This parameter takes effect only if you set ScalingRuleType to TargetTrackingScalingRule. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> disableScaleIn_ = nullptr;
    // The warm-up period of instances. During the warm-up period, a series of preparation measures are taken for the new instances. Performance metrics of instances being warmed up are not counted towards the monitoring range.
    std::shared_ptr<int32_t> estimatedInstanceWarmup_ = nullptr;
    // The Hybrid Cloud Monitoring metrics. For more information, see [Create a custom target tracking scaling rule](https://help.aliyun.com/document_detail/2852162.html).
    std::shared_ptr<vector<Models::DescribeScalingRulesResponseBodyScalingRulesHybridMetrics>> hybridMetrics_ = nullptr;
    // The ID of the Hybrid Cloud Monitoring namespace.
    // 
    // For information about how to manage Hybrid Cloud Monitoring namespaces, see [Manage namespaces](https://help.aliyun.com/document_detail/217606.html).
    std::shared_ptr<string> hybridMonitorNamespace_ = nullptr;
    // The maximum number of ECS instances that can be contained in the scaling group. If you specify this parameter, you must also specify PredictiveValueBehavior.
    std::shared_ptr<int32_t> initialMaxSize_ = nullptr;
    // The maximum number of ECS instances that can be contained in the scaling group.
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    // The name of the metric of the event-triggered task that is associated with the scaling rule.
    std::shared_ptr<string> metricName_ = nullptr;
    // The metric type. Valid values:
    // 
    // *   system: system metrics of CloudMonitor.
    // *   custom: custom metrics that are reported to CloudMonitor.
    // *   hybrid: metrics of Hybrid Cloud Monitoring.
    std::shared_ptr<string> metricType_ = nullptr;
    // The minimum number of instances that must be scaled. This parameter takes effect only if you set ScalingRuleType to SimpleScalingRule or StepScalingRule and set AdjustmentType to PercentChangeInCapacity.
    std::shared_ptr<int32_t> minAdjustmentMagnitude_ = nullptr;
    // The minimum number of ECS instances that must be contained in the scaling group.
    std::shared_ptr<int32_t> minSize_ = nullptr;
    // The mode of the predictive scaling rule. Valid values:
    // 
    // *   PredictAndScale: provides predictions and creates prediction tasks.
    // *   PredictOnly: provides predictions but does not create prediction tasks.
    std::shared_ptr<string> predictiveScalingMode_ = nullptr;
    // The amount of buffer time before prediction tasks are executed. By default, all prediction tasks that are automatically created based on a predictive scaling rule are executed on the hour. You can specify a buffer time for resource preparation before prediction tasks are executed. Valid values: 0 to 60. Unit: minutes.
    std::shared_ptr<int32_t> predictiveTaskBufferTime_ = nullptr;
    // The action on the predicted maximum value. Valid values:
    // 
    // *   MaxOverridePredictiveValue: uses the initial maximum capacity as the maximum value for prediction tasks if the predicted value is greater than the initial maximum capacity.
    // *   PredictiveValueOverrideMax: uses the predicted value as the maximum value for prediction tasks when the predicted value is greater than the initial maximum capacity.
    // *   PredictiveValueOverrideMaxWithBuffer: increases the predicted value by a ratio that is specified by PredictiveValueBuffer, and uses the increased value as the maximum value for prediction tasks if the predicted value increased by this ratio is greater than the initial maximum capacity.
    std::shared_ptr<string> predictiveValueBehavior_ = nullptr;
    // The ratio based on which the predicted value is increased when PredictiveValueBehavior is set to PredictiveValueOverrideMaxWithBuffer. If the predicted value increased by this ratio is greater than the initial maximum capacity, the increased value is used as the maximum value for prediction tasks. Valid values: 0 to 100.
    std::shared_ptr<int32_t> predictiveValueBuffer_ = nullptr;
    // The number of consecutive times that the event-triggered task for scale-in purposes must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and associated with the target tracking scaling rule.
    std::shared_ptr<int32_t> scaleInEvaluationCount_ = nullptr;
    // The number of consecutive times that the event-triggered task created for scale-out purposes must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and associated with the target tracking scaling rule.
    std::shared_ptr<int32_t> scaleOutEvaluationCount_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The unique identifier of the scaling rule.
    std::shared_ptr<string> scalingRuleAri_ = nullptr;
    // The ID of the scaling rule.
    std::shared_ptr<string> scalingRuleId_ = nullptr;
    // The name of the scaling rule.
    std::shared_ptr<string> scalingRuleName_ = nullptr;
    // The type of the scaling rule. Valid values:
    // 
    // *   SimpleScalingRule: a simple scaling rule. Once a simple scaling rule is executed, Auto Scaling adjusts the number of ECS instances in the scaling group based on the values of AdjustmentType and AdjustmentValue.
    // *   TargetTrackingScalingRule: a target tracking scaling rule. Once a target tracking scaling rule is executed, Auto Scaling dynamically calculates the number of ECS instances or elastic container instances to scale based on the predefined metric (MetricName) and attempts to maintain the metric value close to the specified target value (TargetValue).
    // *   StepScalingRule: a step scaling rule. Once a step scaling rule is executed, Auto Scaling scales instances step by step based on the predefined thresholds and metric values.
    // *   PredictiveScalingRule: a predictive scaling rule. Once a predictive scaling rule is executed, Auto Scaling analyzes the historical monitoring data based on the machine learning technology and predicts the trends of metric data. Auto Scaling also creates scheduled tasks to enable dynamic adjustment of the boundary values for the scaling group.
    std::shared_ptr<string> scalingRuleType_ = nullptr;
    // The step adjustments of the step scaling rule.
    std::shared_ptr<vector<Models::DescribeScalingRulesResponseBodyScalingRulesStepAdjustments>> stepAdjustments_ = nullptr;
    // The target value of the metric. If you set ScalingRuleType to TargetTrackingScalingRule or PredictiveScalingRule, Auto Scaling keeps the metric value close to the target value by adding instances to or removing instances from the scaling group.
    std::shared_ptr<float> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
