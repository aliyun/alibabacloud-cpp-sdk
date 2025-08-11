// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyScalingRuleRequestAlarmDimensions.hpp>
#include <alibabacloud/models/ModifyScalingRuleRequestAlarmOptions.hpp>
#include <alibabacloud/models/ModifyScalingRuleRequestHybridMetrics.hpp>
#include <alibabacloud/models/ModifyScalingRuleRequestStepAdjustments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingRuleRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScaleInEvaluationCount, scaleInEvaluationCount_);
      DARABONBA_PTR_TO_JSON(ScaleOutEvaluationCount, scaleOutEvaluationCount_);
      DARABONBA_PTR_TO_JSON(ScalingRuleId, scalingRuleId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(StepAdjustments, stepAdjustments_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingRuleRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScaleInEvaluationCount, scaleInEvaluationCount_);
      DARABONBA_PTR_FROM_JSON(ScaleOutEvaluationCount, scaleOutEvaluationCount_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleId, scalingRuleId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(StepAdjustments, stepAdjustments_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    ModifyScalingRuleRequest() = default ;
    ModifyScalingRuleRequest(const ModifyScalingRuleRequest &) = default ;
    ModifyScalingRuleRequest(ModifyScalingRuleRequest &&) = default ;
    ModifyScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingRuleRequest() = default ;
    ModifyScalingRuleRequest& operator=(const ModifyScalingRuleRequest &) = default ;
    ModifyScalingRuleRequest& operator=(ModifyScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustmentType_ != nullptr
        && this->adjustmentValue_ != nullptr && this->alarmDimensions_ != nullptr && this->alarmOptions_ != nullptr && this->cooldown_ != nullptr && this->disableScaleIn_ != nullptr
        && this->estimatedInstanceWarmup_ != nullptr && this->hybridMetrics_ != nullptr && this->hybridMonitorNamespace_ != nullptr && this->initialMaxSize_ != nullptr && this->metricName_ != nullptr
        && this->metricType_ != nullptr && this->minAdjustmentMagnitude_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->predictiveScalingMode_ != nullptr
        && this->predictiveTaskBufferTime_ != nullptr && this->predictiveValueBehavior_ != nullptr && this->predictiveValueBuffer_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->scaleInEvaluationCount_ != nullptr && this->scaleOutEvaluationCount_ != nullptr && this->scalingRuleId_ != nullptr && this->scalingRuleName_ != nullptr && this->stepAdjustments_ != nullptr
        && this->targetValue_ != nullptr; };
    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string adjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline ModifyScalingRuleRequest& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t adjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ModifyScalingRuleRequest& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // alarmDimensions Field Functions 
    bool hasAlarmDimensions() const { return this->alarmDimensions_ != nullptr;};
    void deleteAlarmDimensions() { this->alarmDimensions_ = nullptr;};
    inline const vector<ModifyScalingRuleRequestAlarmDimensions> & alarmDimensions() const { DARABONBA_PTR_GET_CONST(alarmDimensions_, vector<ModifyScalingRuleRequestAlarmDimensions>) };
    inline vector<ModifyScalingRuleRequestAlarmDimensions> alarmDimensions() { DARABONBA_PTR_GET(alarmDimensions_, vector<ModifyScalingRuleRequestAlarmDimensions>) };
    inline ModifyScalingRuleRequest& setAlarmDimensions(const vector<ModifyScalingRuleRequestAlarmDimensions> & alarmDimensions) { DARABONBA_PTR_SET_VALUE(alarmDimensions_, alarmDimensions) };
    inline ModifyScalingRuleRequest& setAlarmDimensions(vector<ModifyScalingRuleRequestAlarmDimensions> && alarmDimensions) { DARABONBA_PTR_SET_RVALUE(alarmDimensions_, alarmDimensions) };


    // alarmOptions Field Functions 
    bool hasAlarmOptions() const { return this->alarmOptions_ != nullptr;};
    void deleteAlarmOptions() { this->alarmOptions_ = nullptr;};
    inline const ModifyScalingRuleRequestAlarmOptions & alarmOptions() const { DARABONBA_PTR_GET_CONST(alarmOptions_, ModifyScalingRuleRequestAlarmOptions) };
    inline ModifyScalingRuleRequestAlarmOptions alarmOptions() { DARABONBA_PTR_GET(alarmOptions_, ModifyScalingRuleRequestAlarmOptions) };
    inline ModifyScalingRuleRequest& setAlarmOptions(const ModifyScalingRuleRequestAlarmOptions & alarmOptions) { DARABONBA_PTR_SET_VALUE(alarmOptions_, alarmOptions) };
    inline ModifyScalingRuleRequest& setAlarmOptions(ModifyScalingRuleRequestAlarmOptions && alarmOptions) { DARABONBA_PTR_SET_RVALUE(alarmOptions_, alarmOptions) };


    // cooldown Field Functions 
    bool hasCooldown() const { return this->cooldown_ != nullptr;};
    void deleteCooldown() { this->cooldown_ = nullptr;};
    inline int32_t cooldown() const { DARABONBA_PTR_GET_DEFAULT(cooldown_, 0) };
    inline ModifyScalingRuleRequest& setCooldown(int32_t cooldown) { DARABONBA_PTR_SET_VALUE(cooldown_, cooldown) };


    // disableScaleIn Field Functions 
    bool hasDisableScaleIn() const { return this->disableScaleIn_ != nullptr;};
    void deleteDisableScaleIn() { this->disableScaleIn_ = nullptr;};
    inline bool disableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(disableScaleIn_, false) };
    inline ModifyScalingRuleRequest& setDisableScaleIn(bool disableScaleIn) { DARABONBA_PTR_SET_VALUE(disableScaleIn_, disableScaleIn) };


    // estimatedInstanceWarmup Field Functions 
    bool hasEstimatedInstanceWarmup() const { return this->estimatedInstanceWarmup_ != nullptr;};
    void deleteEstimatedInstanceWarmup() { this->estimatedInstanceWarmup_ = nullptr;};
    inline int32_t estimatedInstanceWarmup() const { DARABONBA_PTR_GET_DEFAULT(estimatedInstanceWarmup_, 0) };
    inline ModifyScalingRuleRequest& setEstimatedInstanceWarmup(int32_t estimatedInstanceWarmup) { DARABONBA_PTR_SET_VALUE(estimatedInstanceWarmup_, estimatedInstanceWarmup) };


    // hybridMetrics Field Functions 
    bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
    void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
    inline const vector<ModifyScalingRuleRequestHybridMetrics> & hybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<ModifyScalingRuleRequestHybridMetrics>) };
    inline vector<ModifyScalingRuleRequestHybridMetrics> hybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<ModifyScalingRuleRequestHybridMetrics>) };
    inline ModifyScalingRuleRequest& setHybridMetrics(const vector<ModifyScalingRuleRequestHybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
    inline ModifyScalingRuleRequest& setHybridMetrics(vector<ModifyScalingRuleRequestHybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


    // hybridMonitorNamespace Field Functions 
    bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
    void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
    inline string hybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
    inline ModifyScalingRuleRequest& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


    // initialMaxSize Field Functions 
    bool hasInitialMaxSize() const { return this->initialMaxSize_ != nullptr;};
    void deleteInitialMaxSize() { this->initialMaxSize_ = nullptr;};
    inline int32_t initialMaxSize() const { DARABONBA_PTR_GET_DEFAULT(initialMaxSize_, 0) };
    inline ModifyScalingRuleRequest& setInitialMaxSize(int32_t initialMaxSize) { DARABONBA_PTR_SET_VALUE(initialMaxSize_, initialMaxSize) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ModifyScalingRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ModifyScalingRuleRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t minAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline ModifyScalingRuleRequest& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScalingRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScalingRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // predictiveScalingMode Field Functions 
    bool hasPredictiveScalingMode() const { return this->predictiveScalingMode_ != nullptr;};
    void deletePredictiveScalingMode() { this->predictiveScalingMode_ = nullptr;};
    inline string predictiveScalingMode() const { DARABONBA_PTR_GET_DEFAULT(predictiveScalingMode_, "") };
    inline ModifyScalingRuleRequest& setPredictiveScalingMode(string predictiveScalingMode) { DARABONBA_PTR_SET_VALUE(predictiveScalingMode_, predictiveScalingMode) };


    // predictiveTaskBufferTime Field Functions 
    bool hasPredictiveTaskBufferTime() const { return this->predictiveTaskBufferTime_ != nullptr;};
    void deletePredictiveTaskBufferTime() { this->predictiveTaskBufferTime_ = nullptr;};
    inline int32_t predictiveTaskBufferTime() const { DARABONBA_PTR_GET_DEFAULT(predictiveTaskBufferTime_, 0) };
    inline ModifyScalingRuleRequest& setPredictiveTaskBufferTime(int32_t predictiveTaskBufferTime) { DARABONBA_PTR_SET_VALUE(predictiveTaskBufferTime_, predictiveTaskBufferTime) };


    // predictiveValueBehavior Field Functions 
    bool hasPredictiveValueBehavior() const { return this->predictiveValueBehavior_ != nullptr;};
    void deletePredictiveValueBehavior() { this->predictiveValueBehavior_ = nullptr;};
    inline string predictiveValueBehavior() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBehavior_, "") };
    inline ModifyScalingRuleRequest& setPredictiveValueBehavior(string predictiveValueBehavior) { DARABONBA_PTR_SET_VALUE(predictiveValueBehavior_, predictiveValueBehavior) };


    // predictiveValueBuffer Field Functions 
    bool hasPredictiveValueBuffer() const { return this->predictiveValueBuffer_ != nullptr;};
    void deletePredictiveValueBuffer() { this->predictiveValueBuffer_ = nullptr;};
    inline int32_t predictiveValueBuffer() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBuffer_, 0) };
    inline ModifyScalingRuleRequest& setPredictiveValueBuffer(int32_t predictiveValueBuffer) { DARABONBA_PTR_SET_VALUE(predictiveValueBuffer_, predictiveValueBuffer) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScalingRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyScalingRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleInEvaluationCount Field Functions 
    bool hasScaleInEvaluationCount() const { return this->scaleInEvaluationCount_ != nullptr;};
    void deleteScaleInEvaluationCount() { this->scaleInEvaluationCount_ = nullptr;};
    inline int32_t scaleInEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleInEvaluationCount_, 0) };
    inline ModifyScalingRuleRequest& setScaleInEvaluationCount(int32_t scaleInEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleInEvaluationCount_, scaleInEvaluationCount) };


    // scaleOutEvaluationCount Field Functions 
    bool hasScaleOutEvaluationCount() const { return this->scaleOutEvaluationCount_ != nullptr;};
    void deleteScaleOutEvaluationCount() { this->scaleOutEvaluationCount_ = nullptr;};
    inline int32_t scaleOutEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleOutEvaluationCount_, 0) };
    inline ModifyScalingRuleRequest& setScaleOutEvaluationCount(int32_t scaleOutEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleOutEvaluationCount_, scaleOutEvaluationCount) };


    // scalingRuleId Field Functions 
    bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
    void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
    inline string scalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
    inline ModifyScalingRuleRequest& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ModifyScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // stepAdjustments Field Functions 
    bool hasStepAdjustments() const { return this->stepAdjustments_ != nullptr;};
    void deleteStepAdjustments() { this->stepAdjustments_ = nullptr;};
    inline const vector<ModifyScalingRuleRequestStepAdjustments> & stepAdjustments() const { DARABONBA_PTR_GET_CONST(stepAdjustments_, vector<ModifyScalingRuleRequestStepAdjustments>) };
    inline vector<ModifyScalingRuleRequestStepAdjustments> stepAdjustments() { DARABONBA_PTR_GET(stepAdjustments_, vector<ModifyScalingRuleRequestStepAdjustments>) };
    inline ModifyScalingRuleRequest& setStepAdjustments(const vector<ModifyScalingRuleRequestStepAdjustments> & stepAdjustments) { DARABONBA_PTR_SET_VALUE(stepAdjustments_, stepAdjustments) };
    inline ModifyScalingRuleRequest& setStepAdjustments(vector<ModifyScalingRuleRequestStepAdjustments> && stepAdjustments) { DARABONBA_PTR_SET_RVALUE(stepAdjustments_, stepAdjustments) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline float targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0.0) };
    inline ModifyScalingRuleRequest& setTargetValue(float targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The adjustment method of the scaling rule. This is required when the ScalingRuleType parameter is set to SimpleScalingRule or StepScalingRule. Valid values:
    // 
    // *   QuantityChangeInCapacity: adds the specified number of ECS instances to or removes the specified number of ECS instances from the scaling group.
    // *   PercentChangeInCapacity: adds the specified percentage of ECS instances to or removes the specified percentage of ECS instances from the scaling group.
    // *   TotalCapacity: adjusts the number of ECS instances in the scaling group to the specified number.
    std::shared_ptr<string> adjustmentType_ = nullptr;
    // The target value specified in the scaling rule. This parameter is required when the ScalingRuleType parameter is set to SimpleScalingRule or StepScalingRule. The number of ECS instances that are scaled in a single scaling activity cannot exceed 1,000.
    // 
    // *   Valid values if you set the AdjustmentType parameter to QuantityChangeInCapacity: -1000 to 1000.
    // *   Valid values if you set the AdjustmentType parameter to PercentChangeInCapacity: -100 to 10000.
    // *   Valid values if you set the AdjustmentType parameter to TotalCapacity: 0 to 2000.
    std::shared_ptr<int32_t> adjustmentValue_ = nullptr;
    // The dimensions. This parameter is applicable to target tracking scaling rules. You can specify this parameter if your predefined metric requires extra dimensions. For example, if you predefine the LoadBalancerRealServerAverageQps metric, you must use this parameter to specify the rulePool dimension.
    std::shared_ptr<vector<ModifyScalingRuleRequestAlarmDimensions>> alarmDimensions_ = nullptr;
    // The alert attributes.
    std::shared_ptr<ModifyScalingRuleRequestAlarmOptions> alarmOptions_ = nullptr;
    // The cooldown time of the scaling rule. This parameter is available only if you set the ScalingRuleType parameter to SimpleScalingRule.
    // 
    // Valid values: 0 to 86400. Unit: seconds.
    std::shared_ptr<int32_t> cooldown_ = nullptr;
    // Specifies whether to disable scale-in. This parameter is available only if you set the ScalingRuleType parameter to TargetTrackingScalingRule.
    std::shared_ptr<bool> disableScaleIn_ = nullptr;
    // The warmup period of an instance. This parameter is available only if you set the ScalingRuleType parameter to TargetTrackingScalingRule or PredictiveScalingRule. Auto Scaling adds ECS instances that are in the warmup state to a scaling group but does not report monitoring data to CloudMonitor during the warmup period.
    // 
    // > Auto Scaling calculates the number of ECS instances that need to be scaled. ECS instances in the warmup state are not counted towards the current capacity of the scaling group.
    // 
    // Valid values: 0 to 86400. Unit: seconds.
    std::shared_ptr<int32_t> estimatedInstanceWarmup_ = nullptr;
    // The Hybrid Cloud Monitoring metrics. For more information, see [Create a custom target tracking scaling rule](https://help.aliyun.com/document_detail/2852162.html).
    std::shared_ptr<vector<ModifyScalingRuleRequestHybridMetrics>> hybridMetrics_ = nullptr;
    // The ID of the Hybrid Cloud Monitoring namespace.
    // 
    // For information about how to manage Hybrid Cloud Monitoring namespaces, see [Manage namespaces](https://help.aliyun.com/document_detail/217606.html).
    std::shared_ptr<string> hybridMonitorNamespace_ = nullptr;
    // The maximum number of ECS instances that can be contained in the scaling group. If you specify InitialMaxSize, you must specify `PredictiveValueBehavior`.
    std::shared_ptr<int32_t> initialMaxSize_ = nullptr;
    // The predefined metric. This parameter is required only if you create a target tracking scaling rule or predictive scaling rule.
    // 
    // Valid values if you create a target tracking scaling rule:
    // 
    // *   CpuUtilizationAgent (recommended): the CPU utilization.
    // *   MemoryUtilization (recommended): the memory usage.
    // *   CpuUtilization: the average CPU utilization.
    // *   IntranetTx: the average outbound traffic over an internal network.
    // *   IntranetRx: the average inbound traffic over an internal network.
    // *   VpcInternetTx: the average outbound traffic from a virtual private cloud (VPC) to the Internet.
    // *   VpcInternetRx: the average inbound traffic from the Internet to a VPC.
    // *   LoadBalancerRealServerAverageQps: the queries per second (QPS) per Application Load Balancer (ALB) server group.
    // 
    // Valid values if you create a predictive scaling rule:
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
    // The minimum number of instances to scale. This parameter takes effect only if you create a simple scaling rule or step scaling rule and set `AdjustmentType` to `PercentChangeInCapacity`.
    std::shared_ptr<int32_t> minAdjustmentMagnitude_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The mode of the predictive scaling rule. Valid values:
    // 
    // *   PredictAndScale: produces predictions and creates prediction tasks.
    // *   PredictOnly: produces predictions but does not create prediction tasks.
    std::shared_ptr<string> predictiveScalingMode_ = nullptr;
    // The amount of buffer time before the prediction task is executed. By default, all prediction tasks that are automatically created for a predictive scaling rule are executed on the hour. You can specify an amount of buffer time for resource preparation before the prediction tasks are executed. Valid values: 0 to 60.
    std::shared_ptr<int32_t> predictiveTaskBufferTime_ = nullptr;
    // Specifies which one of the initial maximum capacity and the predicted value can be used as the maximum value for prediction tasks. Valid values:
    // 
    // *   MaxOverridePredictiveValue: uses the initial maximum capacity as the maximum value for prediction tasks if the predicted value is greater than the initial maximum capacity.
    // *   PredictiveValueOverrideMax: uses the predicted value as the maximum value for prediction tasks when the predicted value is greater than the initial maximum capacity.
    // *   PredictiveValueOverrideMaxWithBuffer: increases the predicted value by a percentage that is specified by the PredictiveValueBuffer parameter. If the predicted value that is increased by the percentage is greater than the initial maximum capacity, the increased value is used as the maximum value for prediction tasks.
    std::shared_ptr<string> predictiveValueBehavior_ = nullptr;
    // The ratio based on which the predicted value is increased when `PredictiveValueBehavior` is set to `PredictiveValueOverrideMaxWithBuffer`. If the predicted value increased by this ratio is greater than the initial maximum capacity, the increased value is used as the maximum value for prediction tasks. Valid values: 0 to 100.
    std::shared_ptr<int32_t> predictiveValueBuffer_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The number of consecutive times that the event-triggered task created for scale-in activities must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and then associated with the target tracking scaling rule.
    std::shared_ptr<int32_t> scaleInEvaluationCount_ = nullptr;
    // The number of consecutive times that the event-triggered task created for scale-out activities must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and then associated with the target tracking scaling rule.
    std::shared_ptr<int32_t> scaleOutEvaluationCount_ = nullptr;
    // The ID of the scaling rule that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingRuleId_ = nullptr;
    // The name of the scaling rule. The name must be 2 to 64 letters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter or digit.
    // 
    // The name of each scaling rule must be unique under the same account within the same region.
    std::shared_ptr<string> scalingRuleName_ = nullptr;
    // Details of the step adjustments.
    std::shared_ptr<vector<ModifyScalingRuleRequestStepAdjustments>> stepAdjustments_ = nullptr;
    // The target value. This parameter is available only if you set the ScalingRuleType parameter to TargetTrackingScalingRule or PredictiveScalingRule. The value must be greater than 0 and can have up to three decimal places.
    std::shared_ptr<float> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
