// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateScalingRuleRequestAlarmDimensions.hpp>
#include <alibabacloud/models/CreateScalingRuleRequestAlarmOptions.hpp>
#include <alibabacloud/models/CreateScalingRuleRequestHybridMetrics.hpp>
#include <alibabacloud/models/CreateScalingRuleRequestStepAdjustments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(AlarmDimensions, alarmDimensions_);
      DARABONBA_PTR_TO_JSON(AlarmOptions, alarmOptions_);
      DARABONBA_PTR_TO_JSON(Cooldown, cooldown_);
      DARABONBA_PTR_TO_JSON(DisableScaleIn, disableScaleIn_);
      DARABONBA_PTR_TO_JSON(EstimatedInstanceWarmup, estimatedInstanceWarmup_);
      DARABONBA_PTR_TO_JSON(HybridMetrics, hybridMetrics_);
      DARABONBA_PTR_TO_JSON(HybridMonitorNamespace, hybridMonitorNamespace_);
      DARABONBA_PTR_TO_JSON(InitialMaxSize, initialMaxSize_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PredictiveScalingMode, predictiveScalingMode_);
      DARABONBA_PTR_TO_JSON(PredictiveTaskBufferTime, predictiveTaskBufferTime_);
      DARABONBA_PTR_TO_JSON(PredictiveValueBehavior, predictiveValueBehavior_);
      DARABONBA_PTR_TO_JSON(PredictiveValueBuffer, predictiveValueBuffer_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScaleInEvaluationCount, scaleInEvaluationCount_);
      DARABONBA_PTR_TO_JSON(ScaleOutEvaluationCount, scaleOutEvaluationCount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
      DARABONBA_PTR_TO_JSON(StepAdjustments, stepAdjustments_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(AlarmDimensions, alarmDimensions_);
      DARABONBA_PTR_FROM_JSON(AlarmOptions, alarmOptions_);
      DARABONBA_PTR_FROM_JSON(Cooldown, cooldown_);
      DARABONBA_PTR_FROM_JSON(DisableScaleIn, disableScaleIn_);
      DARABONBA_PTR_FROM_JSON(EstimatedInstanceWarmup, estimatedInstanceWarmup_);
      DARABONBA_PTR_FROM_JSON(HybridMetrics, hybridMetrics_);
      DARABONBA_PTR_FROM_JSON(HybridMonitorNamespace, hybridMonitorNamespace_);
      DARABONBA_PTR_FROM_JSON(InitialMaxSize, initialMaxSize_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(MinAdjustmentMagnitude, minAdjustmentMagnitude_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PredictiveScalingMode, predictiveScalingMode_);
      DARABONBA_PTR_FROM_JSON(PredictiveTaskBufferTime, predictiveTaskBufferTime_);
      DARABONBA_PTR_FROM_JSON(PredictiveValueBehavior, predictiveValueBehavior_);
      DARABONBA_PTR_FROM_JSON(PredictiveValueBuffer, predictiveValueBuffer_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScaleInEvaluationCount, scaleInEvaluationCount_);
      DARABONBA_PTR_FROM_JSON(ScaleOutEvaluationCount, scaleOutEvaluationCount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
      DARABONBA_PTR_FROM_JSON(StepAdjustments, stepAdjustments_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    CreateScalingRuleRequest() = default ;
    CreateScalingRuleRequest(const CreateScalingRuleRequest &) = default ;
    CreateScalingRuleRequest(CreateScalingRuleRequest &&) = default ;
    CreateScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingRuleRequest() = default ;
    CreateScalingRuleRequest& operator=(const CreateScalingRuleRequest &) = default ;
    CreateScalingRuleRequest& operator=(CreateScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustmentType_ != nullptr
        && this->adjustmentValue_ != nullptr && this->alarmDimensions_ != nullptr && this->alarmOptions_ != nullptr && this->cooldown_ != nullptr && this->disableScaleIn_ != nullptr
        && this->estimatedInstanceWarmup_ != nullptr && this->hybridMetrics_ != nullptr && this->hybridMonitorNamespace_ != nullptr && this->initialMaxSize_ != nullptr && this->metricName_ != nullptr
        && this->metricType_ != nullptr && this->minAdjustmentMagnitude_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->predictiveScalingMode_ != nullptr
        && this->predictiveTaskBufferTime_ != nullptr && this->predictiveValueBehavior_ != nullptr && this->predictiveValueBuffer_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->scaleInEvaluationCount_ != nullptr && this->scaleOutEvaluationCount_ != nullptr && this->scalingGroupId_ != nullptr && this->scalingRuleName_ != nullptr && this->scalingRuleType_ != nullptr
        && this->stepAdjustments_ != nullptr && this->targetValue_ != nullptr; };
    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string adjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline CreateScalingRuleRequest& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline CreateScalingRuleRequest& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // alarmDimensions Field Functions 
    bool hasAlarmDimensions() const { return this->alarmDimensions_ != nullptr;};
    void deleteAlarmDimensions() { this->alarmDimensions_ = nullptr;};
    inline const vector<CreateScalingRuleRequestAlarmDimensions> & alarmDimensions() const { DARABONBA_PTR_GET_CONST(alarmDimensions_, vector<CreateScalingRuleRequestAlarmDimensions>) };
    inline vector<CreateScalingRuleRequestAlarmDimensions> alarmDimensions() { DARABONBA_PTR_GET(alarmDimensions_, vector<CreateScalingRuleRequestAlarmDimensions>) };
    inline CreateScalingRuleRequest& setAlarmDimensions(const vector<CreateScalingRuleRequestAlarmDimensions> & alarmDimensions) { DARABONBA_PTR_SET_VALUE(alarmDimensions_, alarmDimensions) };
    inline CreateScalingRuleRequest& setAlarmDimensions(vector<CreateScalingRuleRequestAlarmDimensions> && alarmDimensions) { DARABONBA_PTR_SET_RVALUE(alarmDimensions_, alarmDimensions) };


    // alarmOptions Field Functions 
    bool hasAlarmOptions() const { return this->alarmOptions_ != nullptr;};
    void deleteAlarmOptions() { this->alarmOptions_ = nullptr;};
    inline const CreateScalingRuleRequestAlarmOptions & alarmOptions() const { DARABONBA_PTR_GET_CONST(alarmOptions_, CreateScalingRuleRequestAlarmOptions) };
    inline CreateScalingRuleRequestAlarmOptions alarmOptions() { DARABONBA_PTR_GET(alarmOptions_, CreateScalingRuleRequestAlarmOptions) };
    inline CreateScalingRuleRequest& setAlarmOptions(const CreateScalingRuleRequestAlarmOptions & alarmOptions) { DARABONBA_PTR_SET_VALUE(alarmOptions_, alarmOptions) };
    inline CreateScalingRuleRequest& setAlarmOptions(CreateScalingRuleRequestAlarmOptions && alarmOptions) { DARABONBA_PTR_SET_RVALUE(alarmOptions_, alarmOptions) };


    // cooldown Field Functions 
    bool hasCooldown() const { return this->cooldown_ != nullptr;};
    void deleteCooldown() { this->cooldown_ = nullptr;};
    inline int32_t cooldown() const { DARABONBA_PTR_GET_DEFAULT(cooldown_, 0) };
    inline CreateScalingRuleRequest& setCooldown(int32_t cooldown) { DARABONBA_PTR_SET_VALUE(cooldown_, cooldown) };


    // disableScaleIn Field Functions 
    bool hasDisableScaleIn() const { return this->disableScaleIn_ != nullptr;};
    void deleteDisableScaleIn() { this->disableScaleIn_ = nullptr;};
    inline bool disableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(disableScaleIn_, false) };
    inline CreateScalingRuleRequest& setDisableScaleIn(bool disableScaleIn) { DARABONBA_PTR_SET_VALUE(disableScaleIn_, disableScaleIn) };


    // estimatedInstanceWarmup Field Functions 
    bool hasEstimatedInstanceWarmup() const { return this->estimatedInstanceWarmup_ != nullptr;};
    void deleteEstimatedInstanceWarmup() { this->estimatedInstanceWarmup_ = nullptr;};
    inline int32_t estimatedInstanceWarmup() const { DARABONBA_PTR_GET_DEFAULT(estimatedInstanceWarmup_, 0) };
    inline CreateScalingRuleRequest& setEstimatedInstanceWarmup(int32_t estimatedInstanceWarmup) { DARABONBA_PTR_SET_VALUE(estimatedInstanceWarmup_, estimatedInstanceWarmup) };


    // hybridMetrics Field Functions 
    bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
    void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
    inline const vector<CreateScalingRuleRequestHybridMetrics> & hybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<CreateScalingRuleRequestHybridMetrics>) };
    inline vector<CreateScalingRuleRequestHybridMetrics> hybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<CreateScalingRuleRequestHybridMetrics>) };
    inline CreateScalingRuleRequest& setHybridMetrics(const vector<CreateScalingRuleRequestHybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
    inline CreateScalingRuleRequest& setHybridMetrics(vector<CreateScalingRuleRequestHybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


    // hybridMonitorNamespace Field Functions 
    bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
    void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
    inline string hybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
    inline CreateScalingRuleRequest& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


    // initialMaxSize Field Functions 
    bool hasInitialMaxSize() const { return this->initialMaxSize_ != nullptr;};
    void deleteInitialMaxSize() { this->initialMaxSize_ = nullptr;};
    inline int32_t initialMaxSize() const { DARABONBA_PTR_GET_DEFAULT(initialMaxSize_, 0) };
    inline CreateScalingRuleRequest& setInitialMaxSize(int32_t initialMaxSize) { DARABONBA_PTR_SET_VALUE(initialMaxSize_, initialMaxSize) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateScalingRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline CreateScalingRuleRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t minAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline CreateScalingRuleRequest& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScalingRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScalingRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // predictiveScalingMode Field Functions 
    bool hasPredictiveScalingMode() const { return this->predictiveScalingMode_ != nullptr;};
    void deletePredictiveScalingMode() { this->predictiveScalingMode_ = nullptr;};
    inline string predictiveScalingMode() const { DARABONBA_PTR_GET_DEFAULT(predictiveScalingMode_, "") };
    inline CreateScalingRuleRequest& setPredictiveScalingMode(string predictiveScalingMode) { DARABONBA_PTR_SET_VALUE(predictiveScalingMode_, predictiveScalingMode) };


    // predictiveTaskBufferTime Field Functions 
    bool hasPredictiveTaskBufferTime() const { return this->predictiveTaskBufferTime_ != nullptr;};
    void deletePredictiveTaskBufferTime() { this->predictiveTaskBufferTime_ = nullptr;};
    inline int32_t predictiveTaskBufferTime() const { DARABONBA_PTR_GET_DEFAULT(predictiveTaskBufferTime_, 0) };
    inline CreateScalingRuleRequest& setPredictiveTaskBufferTime(int32_t predictiveTaskBufferTime) { DARABONBA_PTR_SET_VALUE(predictiveTaskBufferTime_, predictiveTaskBufferTime) };


    // predictiveValueBehavior Field Functions 
    bool hasPredictiveValueBehavior() const { return this->predictiveValueBehavior_ != nullptr;};
    void deletePredictiveValueBehavior() { this->predictiveValueBehavior_ = nullptr;};
    inline string predictiveValueBehavior() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBehavior_, "") };
    inline CreateScalingRuleRequest& setPredictiveValueBehavior(string predictiveValueBehavior) { DARABONBA_PTR_SET_VALUE(predictiveValueBehavior_, predictiveValueBehavior) };


    // predictiveValueBuffer Field Functions 
    bool hasPredictiveValueBuffer() const { return this->predictiveValueBuffer_ != nullptr;};
    void deletePredictiveValueBuffer() { this->predictiveValueBuffer_ = nullptr;};
    inline int32_t predictiveValueBuffer() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBuffer_, 0) };
    inline CreateScalingRuleRequest& setPredictiveValueBuffer(int32_t predictiveValueBuffer) { DARABONBA_PTR_SET_VALUE(predictiveValueBuffer_, predictiveValueBuffer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateScalingRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScalingRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scaleInEvaluationCount Field Functions 
    bool hasScaleInEvaluationCount() const { return this->scaleInEvaluationCount_ != nullptr;};
    void deleteScaleInEvaluationCount() { this->scaleInEvaluationCount_ = nullptr;};
    inline int32_t scaleInEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleInEvaluationCount_, 0) };
    inline CreateScalingRuleRequest& setScaleInEvaluationCount(int32_t scaleInEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleInEvaluationCount_, scaleInEvaluationCount) };


    // scaleOutEvaluationCount Field Functions 
    bool hasScaleOutEvaluationCount() const { return this->scaleOutEvaluationCount_ != nullptr;};
    void deleteScaleOutEvaluationCount() { this->scaleOutEvaluationCount_ = nullptr;};
    inline int32_t scaleOutEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleOutEvaluationCount_, 0) };
    inline CreateScalingRuleRequest& setScaleOutEvaluationCount(int32_t scaleOutEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleOutEvaluationCount_, scaleOutEvaluationCount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateScalingRuleRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline CreateScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string scalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline CreateScalingRuleRequest& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


    // stepAdjustments Field Functions 
    bool hasStepAdjustments() const { return this->stepAdjustments_ != nullptr;};
    void deleteStepAdjustments() { this->stepAdjustments_ = nullptr;};
    inline const vector<CreateScalingRuleRequestStepAdjustments> & stepAdjustments() const { DARABONBA_PTR_GET_CONST(stepAdjustments_, vector<CreateScalingRuleRequestStepAdjustments>) };
    inline vector<CreateScalingRuleRequestStepAdjustments> stepAdjustments() { DARABONBA_PTR_GET(stepAdjustments_, vector<CreateScalingRuleRequestStepAdjustments>) };
    inline CreateScalingRuleRequest& setStepAdjustments(const vector<CreateScalingRuleRequestStepAdjustments> & stepAdjustments) { DARABONBA_PTR_SET_VALUE(stepAdjustments_, stepAdjustments) };
    inline CreateScalingRuleRequest& setStepAdjustments(vector<CreateScalingRuleRequestStepAdjustments> && stepAdjustments) { DARABONBA_PTR_SET_RVALUE(stepAdjustments_, stepAdjustments) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline float targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0.0) };
    inline CreateScalingRuleRequest& setTargetValue(float targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The scaling method of the scaling rule. This parameter is required only if you set the ScalingRuleType parameter to SimpleScalingRule or StepScalingRule. Valid values:
    // 
    // *   QuantityChangeInCapacity: adds the specified number of ECS instances to or removes the specified number of ECS instances from the scaling group.
    // *   PercentChangeInCapacity: adds the specified percentage of ECS instances to or removes the specified percentage of ECS instances from the scaling group.
    // *   TotalCapacity: adjusts the number of ECS instances in the scaling group to a specified number.
    std::shared_ptr<string> adjustmentType_ = nullptr;
    // The number of instances that must be scaled based on the scaling rule. This parameter is required only if you set the ScalingRuleType parameter to SimpleScalingRule or StepScalingRule. The number of ECS instances that are scaled in a single scaling activity cannot exceed 1,000.
    // 
    // *   Valid values if you set the AdjustmentType parameter to QuantityChangeInCapacity: -1000 to 1000.
    // *   Valid values if you set the AdjustmentType parameter to PercentChangeInCapacity: -100 to 10000.
    // *   Valid values if you set the AdjustmentType parameter to TotalCapacity: 0 to 2000.
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // The metric dimensions. This parameter is applicable to target tracking scaling rules. If your predefined metric requires extra dimensions, you must specify this parameter. For example, if you use LoadBalancerRealServerAverageQps as your predefined metric, you must use this parameter to specify the rulePool dimension.
    std::shared_ptr<vector<CreateScalingRuleRequestAlarmDimensions>> alarmDimensions_ = nullptr;
    std::shared_ptr<CreateScalingRuleRequestAlarmOptions> alarmOptions_ = nullptr;
    // The cooldown time of the scaling rule. This parameter is available only if you set the ScalingRuleType parameter to SimpleScalingRule. Valid values: 0 to 86400. Unit: seconds.
    // 
    // By default, this parameter is left empty.
    std::shared_ptr<int32_t> cooldown_ = nullptr;
    // Specifies whether to disable scale-in. This parameter is available only if you set ScalingRuleType to TargetTrackingScalingRule.
    // 
    // Default value: false.
    std::shared_ptr<bool> disableScaleIn_ = nullptr;
    // The warmup period of an instance. This parameter is available only if you set the ScalingRuleType parameter to TargetTrackingScalingRule or PredictiveScalingRule. Auto Scaling adds ECS instances that are in the warmup state to a scaling group but does not report monitoring data to CloudMonitor during the warmup period.
    // 
    // > Auto Scaling calculates the number of ECS instances that must be scaled. ECS instances in the warmup state are not counted towards the current capacity of the scaling group.
    // 
    // Valid values: 0 to 86400. Unit: seconds.
    // 
    // Default value: 300.
    std::shared_ptr<int32_t> estimatedInstanceWarmup_ = nullptr;
    // The Hybrid Cloud Monitoring metrics. For more information, see [Create a custom target tracking scaling rule](https://help.aliyun.com/document_detail/2852162.html).
    std::shared_ptr<vector<CreateScalingRuleRequestHybridMetrics>> hybridMetrics_ = nullptr;
    // The ID of the Hybrid Cloud Monitoring namespace.
    // 
    // For information about how to manage Hybrid Cloud Monitoring namespaces, see [Manage namespaces](https://help.aliyun.com/document_detail/217606.html).
    std::shared_ptr<string> hybridMonitorNamespace_ = nullptr;
    // The maximum number of ECS instances that can be contained in the scaling group. If you specify InitialMaxSize, you must specify `PredictiveValueBehavior`.
    // 
    // The default value of this parameter is the value of MaxSize.
    std::shared_ptr<int32_t> initialMaxSize_ = nullptr;
    // The predefined metric that you want to monitor. If you set ScalingRuleType to TargetTrackingScalingRule or PredictiveScalingRule, you must specify this parameter.
    // 
    // Valid values if you set ScalingRuleType to TargetTrackingScalingRule:
    // 
    // *   CpuUtilizationAgent (recommended): the CPU utilization.
    // *   MemoryUtilization (recommended): the memory usage.
    // *   CpuUtilization: the average CPU utilization.
    // *   IntranetTx: the outbound traffic over an internal network.
    // *   IntranetRx: the average inbound traffic over an internal network.
    // *   VpcInternetTx: the outbound traffic from a virtual private cloud (VPC) to the Internet.
    // *   VpcInternetRx: the inbound traffic from the Internet to a VPC.
    // *   LoadBalancerRealServerAverageQps:the queries per second (QPS) per Application Load Balancer (ALB) server group.
    // 
    // Valid values if you set ScalingRuleType to PredictiveScalingRule:
    // 
    // *   CpuUtilization: the average CPU utilization.
    // *   IntranetRx: the average inbound traffic over an internal network.
    // *   IntranetTx: the average outbound traffic over an internal network.
    // 
    // For more information, see [Event-triggered tasks of the system monitoring type](https://help.aliyun.com/document_detail/74854.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The metric type. Valid values:
    // 
    // *   system: system metrics of CloudMonitor.
    // *   custom: custom metrics that are reported to CloudMonitor.
    // *   hybrid: metrics of Hybrid Cloud Monitoring.
    std::shared_ptr<string> metricType_ = nullptr;
    // The minimum number of instances that must be scaled when the AdjustmentType parameter is set to PercentChangeInCapacity. This parameter takes effect only if you set the ScalingRuleType parameter to SimpleScalingRule or StepScalingRule.
    std::shared_ptr<int32_t> minAdjustmentMagnitude_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The mode of the predictive scaling rule. Valid values:
    // 
    // *   PredictAndScale: produces predictions and creates prediction tasks.
    // *   PredictOnly: produces predictions but does not create prediction tasks.
    // 
    // Default value: PredictAndScale.
    std::shared_ptr<string> predictiveScalingMode_ = nullptr;
    // The amount of buffer time before the prediction task is executed. By default, all prediction tasks that are automatically created for a predictive scaling rule are executed on the hour. You can specify an amount of buffer time for resource preparation before the prediction tasks are executed. Valid values: 0 to 60. Unit: minutes.
    // 
    // Default value: 0.
    std::shared_ptr<int32_t> predictiveTaskBufferTime_ = nullptr;
    // The maximum value for predication tasks. Valid values:
    // 
    // *   MaxOverridePredictiveValue: uses the initial maximum capacity as the maximum value for prediction tasks if the predicted value is greater than the initial maximum capacity.
    // *   PredictiveValueOverrideMax: uses the predicted value as the maximum value for prediction tasks if the predicted value is greater than the initial maximum capacity.
    // *   PredictiveValueOverrideMaxWithBuffer: increases the predicted value by a percentage that is specified by the PredictiveValueBuffer parameter. If the predicted value that is increased by the percentage is greater than the initial maximum capacity, the increased value is used as the maximum value for prediction tasks.
    // 
    // Default value: MaxOverridePredictiveValue.
    std::shared_ptr<string> predictiveValueBehavior_ = nullptr;
    // The ratio based on which the predicted value is increased when you set `PredictiveValueBehavior` to `PredictiveValueOverrideMaxWithBuffer`. If the predicted value increased by this ratio is greater than the initial maximum capacity, the increased value is used as the maximum value for prediction tasks. Valid values: 0 to 100.
    // 
    // Default value: 0.
    std::shared_ptr<int32_t> predictiveValueBuffer_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The number of consecutive times that the event-triggered task created for scale-in activities must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and then associated with the target tracking scaling rule.
    // 
    // Default value: 15.
    std::shared_ptr<int32_t> scaleInEvaluationCount_ = nullptr;
    // The number of consecutive times that the event-triggered task created for scale-out activities must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and then associated with the target tracking scaling rule.
    // 
    // Default value: 3.
    std::shared_ptr<int32_t> scaleOutEvaluationCount_ = nullptr;
    // The ID of the scaling group to which the scaling rule belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The name of the scaling rule. The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit.
    // 
    // The name of each scaling rule must be unique under the same account within a region.
    // 
    // If you leave this parameter empty, the scaling rule ID is used.
    std::shared_ptr<string> scalingRuleName_ = nullptr;
    // The type of the scaling rule. Valid values:
    // 
    // *   SimpleScalingRule: a simple scaling rule. After you execute a simple scaling rule, Auto Scaling adjusts the number of ECS instances or elastic container instances in the scaling group based on the values of AdjustmentType and AdjustmentValue.
    // *   TargetTrackingScalingRule: a target tracking scaling rule. After you execute a target tracking scaling rule, Auto Scaling dynamically calculates the number of ECS instances or elastic container instances to scale based on the predefined metric (MetricName) and attempts to maintain the metric value close to the expected value (TargetValue).
    // *   StepScalingRule: a step scaling rule. After you execute a step scaling rule, Auto Scaling scales instances step by step based on the predefined thresholds and metric values.
    // *   PredictiveScalingRule: a predictive scaling rule. After you execute a predictive scaling rule, Auto Scaling uses machine learning to analyze historical monitoring data of the scaling group and predicts the future values of metrics. In addition, Auto Scaling automatically creates scheduled tasks to adjust the boundary values for the scaling group.
    // 
    // Default value: SimpleScalingRule.
    std::shared_ptr<string> scalingRuleType_ = nullptr;
    // Details of the step adjustments.
    std::shared_ptr<vector<CreateScalingRuleRequestStepAdjustments>> stepAdjustments_ = nullptr;
    // The target value. This parameter is required only if you set the ScalingRuleType parameter to TargetTrackingScalingRule or PredictiveScalingRule. The value must be greater than 0 and can have up to three decimal places.
    std::shared_ptr<float> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
