// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class StepAdjustments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StepAdjustments& obj) { 
        DARABONBA_PTR_TO_JSON(MetricIntervalLowerBound, metricIntervalLowerBound_);
        DARABONBA_PTR_TO_JSON(MetricIntervalUpperBound, metricIntervalUpperBound_);
        DARABONBA_PTR_TO_JSON(ScalingAdjustment, scalingAdjustment_);
      };
      friend void from_json(const Darabonba::Json& j, StepAdjustments& obj) { 
        DARABONBA_PTR_FROM_JSON(MetricIntervalLowerBound, metricIntervalLowerBound_);
        DARABONBA_PTR_FROM_JSON(MetricIntervalUpperBound, metricIntervalUpperBound_);
        DARABONBA_PTR_FROM_JSON(ScalingAdjustment, scalingAdjustment_);
      };
      StepAdjustments() = default ;
      StepAdjustments(const StepAdjustments &) = default ;
      StepAdjustments(StepAdjustments &&) = default ;
      StepAdjustments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StepAdjustments() = default ;
      StepAdjustments& operator=(const StepAdjustments &) = default ;
      StepAdjustments& operator=(StepAdjustments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metricIntervalLowerBound_ == nullptr
        && this->metricIntervalUpperBound_ == nullptr && this->scalingAdjustment_ == nullptr; };
      // metricIntervalLowerBound Field Functions 
      bool hasMetricIntervalLowerBound() const { return this->metricIntervalLowerBound_ != nullptr;};
      void deleteMetricIntervalLowerBound() { this->metricIntervalLowerBound_ = nullptr;};
      inline float getMetricIntervalLowerBound() const { DARABONBA_PTR_GET_DEFAULT(metricIntervalLowerBound_, 0.0) };
      inline StepAdjustments& setMetricIntervalLowerBound(float metricIntervalLowerBound) { DARABONBA_PTR_SET_VALUE(metricIntervalLowerBound_, metricIntervalLowerBound) };


      // metricIntervalUpperBound Field Functions 
      bool hasMetricIntervalUpperBound() const { return this->metricIntervalUpperBound_ != nullptr;};
      void deleteMetricIntervalUpperBound() { this->metricIntervalUpperBound_ = nullptr;};
      inline float getMetricIntervalUpperBound() const { DARABONBA_PTR_GET_DEFAULT(metricIntervalUpperBound_, 0.0) };
      inline StepAdjustments& setMetricIntervalUpperBound(float metricIntervalUpperBound) { DARABONBA_PTR_SET_VALUE(metricIntervalUpperBound_, metricIntervalUpperBound) };


      // scalingAdjustment Field Functions 
      bool hasScalingAdjustment() const { return this->scalingAdjustment_ != nullptr;};
      void deleteScalingAdjustment() { this->scalingAdjustment_ = nullptr;};
      inline int32_t getScalingAdjustment() const { DARABONBA_PTR_GET_DEFAULT(scalingAdjustment_, 0) };
      inline StepAdjustments& setScalingAdjustment(int32_t scalingAdjustment) { DARABONBA_PTR_SET_VALUE(scalingAdjustment_, scalingAdjustment) };


    protected:
      // The lower boundary of the step adjustment. This parameter is applicable only to step scaling rules. Valid values: -9.999999E18 to 9.999999E18.
      shared_ptr<float> metricIntervalLowerBound_ {};
      // The upper boundary of the step adjustment. This parameter is applicable only to step scaling rules. Valid values: -9.999999E18 to 9.999999E18.
      shared_ptr<float> metricIntervalUpperBound_ {};
      // The number of instances to adjust for the step adjustment. This parameter is applicable only to step scaling rules.
      shared_ptr<int32_t> scalingAdjustment_ {};
    };

    class HybridMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HybridMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      };
      friend void from_json(const Darabonba::Json& j, HybridMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      };
      HybridMetrics() = default ;
      HybridMetrics(const HybridMetrics &) = default ;
      HybridMetrics(HybridMetrics &&) = default ;
      HybridMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HybridMetrics() = default ;
      HybridMetrics& operator=(const HybridMetrics &) = default ;
      HybridMetrics& operator=(HybridMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dimensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
          DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
          DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
        };
        friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
          DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
          DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
        };
        Dimensions() = default ;
        Dimensions(const Dimensions &) = default ;
        Dimensions(Dimensions &&) = default ;
        Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dimensions() = default ;
        Dimensions& operator=(const Dimensions &) = default ;
        Dimensions& operator=(Dimensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dimensionKey_ == nullptr
        && this->dimensionValue_ == nullptr; };
        // dimensionKey Field Functions 
        bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
        void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
        inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
        inline Dimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


        // dimensionValue Field Functions 
        bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
        void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
        inline string getDimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
        inline Dimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


      protected:
        // The key of the metric dimension.
        shared_ptr<string> dimensionKey_ {};
        // The value of the metric dimension.
        shared_ptr<string> dimensionValue_ {};
      };

      virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->expression_ == nullptr && this->id_ == nullptr && this->metricName_ == nullptr && this->statistic_ == nullptr; };
      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<HybridMetrics::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<HybridMetrics::Dimensions>) };
      inline vector<HybridMetrics::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<HybridMetrics::Dimensions>) };
      inline HybridMetrics& setDimensions(const vector<HybridMetrics::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline HybridMetrics& setDimensions(vector<HybridMetrics::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline HybridMetrics& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline HybridMetrics& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline HybridMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // statistic Field Functions 
      bool hasStatistic() const { return this->statistic_ != nullptr;};
      void deleteStatistic() { this->statistic_ = nullptr;};
      inline string getStatistic() const { DARABONBA_PTR_GET_DEFAULT(statistic_, "") };
      inline HybridMetrics& setStatistic(string statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };


    protected:
      // The dimensions of the metric. This parameter is used to specify the resources monitored by the metric.
      shared_ptr<vector<HybridMetrics::Dimensions>> dimensions_ {};
      // The metric operation expression for multiple Hybrid Cloud Monitoring metrics. The calculation result of the expression is used to trigger scaling activities.
      // 
      // The operation expression must comply with the Reverse Polish Notation (RPN) specification, and only the `+`, `-`, `*`, and `/` operators are supported.
      shared_ptr<string> expression_ {};
      // The reference ID of the metric in the metric operation expression.
      shared_ptr<string> id_ {};
      // The name of the metric in the Hybrid Cloud Monitoring monitoring metrics repository.
      shared_ptr<string> metricName_ {};
      // The statistical method of the metric. Valid values:
      // 
      // - Average: the average value of all data points in the specified period.
      // - Minimum: the minimum value of all data points in the specified period.
      // - Maximum: the maximum value of all data points in the specified period.
      shared_ptr<string> statistic_ {};
    };

    class AlarmOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Period, period_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Period, period_);
      };
      AlarmOptions() = default ;
      AlarmOptions(const AlarmOptions &) = default ;
      AlarmOptions(AlarmOptions &&) = default ;
      AlarmOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmOptions() = default ;
      AlarmOptions& operator=(const AlarmOptions &) = default ;
      AlarmOptions& operator=(AlarmOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->period_ == nullptr; };
      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline AlarmOptions& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    protected:
      // The period for collecting monitoring metric data in the target tracking scaling rule. Unit: seconds. Valid values:
      // 
      // - 15
      // - 60
      // - 120
      // - 300
      // - 900
      // 
      // > Default value: 60.
      shared_ptr<int32_t> period_ {};
    };

    class AlarmDimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmDimensions& obj) { 
        DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
        DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmDimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
        DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
      };
      AlarmDimensions() = default ;
      AlarmDimensions(const AlarmDimensions &) = default ;
      AlarmDimensions(AlarmDimensions &&) = default ;
      AlarmDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmDimensions() = default ;
      AlarmDimensions& operator=(const AlarmDimensions &) = default ;
      AlarmDimensions& operator=(AlarmDimensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimensionKey_ == nullptr
        && this->dimensionValue_ == nullptr; };
      // dimensionKey Field Functions 
      bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
      void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
      inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
      inline AlarmDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


      // dimensionValue Field Functions 
      bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
      void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
      inline string getDimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
      inline AlarmDimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


    protected:
      // The key of the dimension associated with the monitoring metric.
      shared_ptr<string> dimensionKey_ {};
      // The value of the dimension associated with the monitoring metric.
      shared_ptr<string> dimensionValue_ {};
    };

    virtual bool empty() const override { return this->adjustmentType_ == nullptr
        && this->adjustmentValue_ == nullptr && this->alarmDimensions_ == nullptr && this->alarmOptions_ == nullptr && this->cooldown_ == nullptr && this->disableScaleIn_ == nullptr
        && this->estimatedInstanceWarmup_ == nullptr && this->hybridMetrics_ == nullptr && this->hybridMonitorNamespace_ == nullptr && this->initialMaxSize_ == nullptr && this->metricName_ == nullptr
        && this->metricType_ == nullptr && this->minAdjustmentMagnitude_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->predictiveScalingMode_ == nullptr
        && this->predictiveTaskBufferTime_ == nullptr && this->predictiveValueBehavior_ == nullptr && this->predictiveValueBuffer_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->scaleInEvaluationCount_ == nullptr && this->scaleOutEvaluationCount_ == nullptr && this->scalingRuleId_ == nullptr && this->scalingRuleName_ == nullptr && this->stepAdjustments_ == nullptr
        && this->targetValue_ == nullptr; };
    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string getAdjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline ModifyScalingRuleRequest& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ModifyScalingRuleRequest& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // alarmDimensions Field Functions 
    bool hasAlarmDimensions() const { return this->alarmDimensions_ != nullptr;};
    void deleteAlarmDimensions() { this->alarmDimensions_ = nullptr;};
    inline const vector<ModifyScalingRuleRequest::AlarmDimensions> & getAlarmDimensions() const { DARABONBA_PTR_GET_CONST(alarmDimensions_, vector<ModifyScalingRuleRequest::AlarmDimensions>) };
    inline vector<ModifyScalingRuleRequest::AlarmDimensions> getAlarmDimensions() { DARABONBA_PTR_GET(alarmDimensions_, vector<ModifyScalingRuleRequest::AlarmDimensions>) };
    inline ModifyScalingRuleRequest& setAlarmDimensions(const vector<ModifyScalingRuleRequest::AlarmDimensions> & alarmDimensions) { DARABONBA_PTR_SET_VALUE(alarmDimensions_, alarmDimensions) };
    inline ModifyScalingRuleRequest& setAlarmDimensions(vector<ModifyScalingRuleRequest::AlarmDimensions> && alarmDimensions) { DARABONBA_PTR_SET_RVALUE(alarmDimensions_, alarmDimensions) };


    // alarmOptions Field Functions 
    bool hasAlarmOptions() const { return this->alarmOptions_ != nullptr;};
    void deleteAlarmOptions() { this->alarmOptions_ = nullptr;};
    inline const ModifyScalingRuleRequest::AlarmOptions & getAlarmOptions() const { DARABONBA_PTR_GET_CONST(alarmOptions_, ModifyScalingRuleRequest::AlarmOptions) };
    inline ModifyScalingRuleRequest::AlarmOptions getAlarmOptions() { DARABONBA_PTR_GET(alarmOptions_, ModifyScalingRuleRequest::AlarmOptions) };
    inline ModifyScalingRuleRequest& setAlarmOptions(const ModifyScalingRuleRequest::AlarmOptions & alarmOptions) { DARABONBA_PTR_SET_VALUE(alarmOptions_, alarmOptions) };
    inline ModifyScalingRuleRequest& setAlarmOptions(ModifyScalingRuleRequest::AlarmOptions && alarmOptions) { DARABONBA_PTR_SET_RVALUE(alarmOptions_, alarmOptions) };


    // cooldown Field Functions 
    bool hasCooldown() const { return this->cooldown_ != nullptr;};
    void deleteCooldown() { this->cooldown_ = nullptr;};
    inline int32_t getCooldown() const { DARABONBA_PTR_GET_DEFAULT(cooldown_, 0) };
    inline ModifyScalingRuleRequest& setCooldown(int32_t cooldown) { DARABONBA_PTR_SET_VALUE(cooldown_, cooldown) };


    // disableScaleIn Field Functions 
    bool hasDisableScaleIn() const { return this->disableScaleIn_ != nullptr;};
    void deleteDisableScaleIn() { this->disableScaleIn_ = nullptr;};
    inline bool getDisableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(disableScaleIn_, false) };
    inline ModifyScalingRuleRequest& setDisableScaleIn(bool disableScaleIn) { DARABONBA_PTR_SET_VALUE(disableScaleIn_, disableScaleIn) };


    // estimatedInstanceWarmup Field Functions 
    bool hasEstimatedInstanceWarmup() const { return this->estimatedInstanceWarmup_ != nullptr;};
    void deleteEstimatedInstanceWarmup() { this->estimatedInstanceWarmup_ = nullptr;};
    inline int32_t getEstimatedInstanceWarmup() const { DARABONBA_PTR_GET_DEFAULT(estimatedInstanceWarmup_, 0) };
    inline ModifyScalingRuleRequest& setEstimatedInstanceWarmup(int32_t estimatedInstanceWarmup) { DARABONBA_PTR_SET_VALUE(estimatedInstanceWarmup_, estimatedInstanceWarmup) };


    // hybridMetrics Field Functions 
    bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
    void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
    inline const vector<ModifyScalingRuleRequest::HybridMetrics> & getHybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<ModifyScalingRuleRequest::HybridMetrics>) };
    inline vector<ModifyScalingRuleRequest::HybridMetrics> getHybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<ModifyScalingRuleRequest::HybridMetrics>) };
    inline ModifyScalingRuleRequest& setHybridMetrics(const vector<ModifyScalingRuleRequest::HybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
    inline ModifyScalingRuleRequest& setHybridMetrics(vector<ModifyScalingRuleRequest::HybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


    // hybridMonitorNamespace Field Functions 
    bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
    void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
    inline string getHybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
    inline ModifyScalingRuleRequest& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


    // initialMaxSize Field Functions 
    bool hasInitialMaxSize() const { return this->initialMaxSize_ != nullptr;};
    void deleteInitialMaxSize() { this->initialMaxSize_ = nullptr;};
    inline int32_t getInitialMaxSize() const { DARABONBA_PTR_GET_DEFAULT(initialMaxSize_, 0) };
    inline ModifyScalingRuleRequest& setInitialMaxSize(int32_t initialMaxSize) { DARABONBA_PTR_SET_VALUE(initialMaxSize_, initialMaxSize) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ModifyScalingRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ModifyScalingRuleRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t getMinAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline ModifyScalingRuleRequest& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScalingRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScalingRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // predictiveScalingMode Field Functions 
    bool hasPredictiveScalingMode() const { return this->predictiveScalingMode_ != nullptr;};
    void deletePredictiveScalingMode() { this->predictiveScalingMode_ = nullptr;};
    inline string getPredictiveScalingMode() const { DARABONBA_PTR_GET_DEFAULT(predictiveScalingMode_, "") };
    inline ModifyScalingRuleRequest& setPredictiveScalingMode(string predictiveScalingMode) { DARABONBA_PTR_SET_VALUE(predictiveScalingMode_, predictiveScalingMode) };


    // predictiveTaskBufferTime Field Functions 
    bool hasPredictiveTaskBufferTime() const { return this->predictiveTaskBufferTime_ != nullptr;};
    void deletePredictiveTaskBufferTime() { this->predictiveTaskBufferTime_ = nullptr;};
    inline int32_t getPredictiveTaskBufferTime() const { DARABONBA_PTR_GET_DEFAULT(predictiveTaskBufferTime_, 0) };
    inline ModifyScalingRuleRequest& setPredictiveTaskBufferTime(int32_t predictiveTaskBufferTime) { DARABONBA_PTR_SET_VALUE(predictiveTaskBufferTime_, predictiveTaskBufferTime) };


    // predictiveValueBehavior Field Functions 
    bool hasPredictiveValueBehavior() const { return this->predictiveValueBehavior_ != nullptr;};
    void deletePredictiveValueBehavior() { this->predictiveValueBehavior_ = nullptr;};
    inline string getPredictiveValueBehavior() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBehavior_, "") };
    inline ModifyScalingRuleRequest& setPredictiveValueBehavior(string predictiveValueBehavior) { DARABONBA_PTR_SET_VALUE(predictiveValueBehavior_, predictiveValueBehavior) };


    // predictiveValueBuffer Field Functions 
    bool hasPredictiveValueBuffer() const { return this->predictiveValueBuffer_ != nullptr;};
    void deletePredictiveValueBuffer() { this->predictiveValueBuffer_ = nullptr;};
    inline int32_t getPredictiveValueBuffer() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBuffer_, 0) };
    inline ModifyScalingRuleRequest& setPredictiveValueBuffer(int32_t predictiveValueBuffer) { DARABONBA_PTR_SET_VALUE(predictiveValueBuffer_, predictiveValueBuffer) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScalingRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyScalingRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleInEvaluationCount Field Functions 
    bool hasScaleInEvaluationCount() const { return this->scaleInEvaluationCount_ != nullptr;};
    void deleteScaleInEvaluationCount() { this->scaleInEvaluationCount_ = nullptr;};
    inline int32_t getScaleInEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleInEvaluationCount_, 0) };
    inline ModifyScalingRuleRequest& setScaleInEvaluationCount(int32_t scaleInEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleInEvaluationCount_, scaleInEvaluationCount) };


    // scaleOutEvaluationCount Field Functions 
    bool hasScaleOutEvaluationCount() const { return this->scaleOutEvaluationCount_ != nullptr;};
    void deleteScaleOutEvaluationCount() { this->scaleOutEvaluationCount_ = nullptr;};
    inline int32_t getScaleOutEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleOutEvaluationCount_, 0) };
    inline ModifyScalingRuleRequest& setScaleOutEvaluationCount(int32_t scaleOutEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleOutEvaluationCount_, scaleOutEvaluationCount) };


    // scalingRuleId Field Functions 
    bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
    void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
    inline string getScalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
    inline ModifyScalingRuleRequest& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ModifyScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // stepAdjustments Field Functions 
    bool hasStepAdjustments() const { return this->stepAdjustments_ != nullptr;};
    void deleteStepAdjustments() { this->stepAdjustments_ = nullptr;};
    inline const vector<ModifyScalingRuleRequest::StepAdjustments> & getStepAdjustments() const { DARABONBA_PTR_GET_CONST(stepAdjustments_, vector<ModifyScalingRuleRequest::StepAdjustments>) };
    inline vector<ModifyScalingRuleRequest::StepAdjustments> getStepAdjustments() { DARABONBA_PTR_GET(stepAdjustments_, vector<ModifyScalingRuleRequest::StepAdjustments>) };
    inline ModifyScalingRuleRequest& setStepAdjustments(const vector<ModifyScalingRuleRequest::StepAdjustments> & stepAdjustments) { DARABONBA_PTR_SET_VALUE(stepAdjustments_, stepAdjustments) };
    inline ModifyScalingRuleRequest& setStepAdjustments(vector<ModifyScalingRuleRequest::StepAdjustments> && stepAdjustments) { DARABONBA_PTR_SET_RVALUE(stepAdjustments_, stepAdjustments) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline float getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0.0) };
    inline ModifyScalingRuleRequest& setTargetValue(float targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The adjustment method of the scaling rule. This parameter is required and applicable only to simple scaling rules and step scaling rules. Valid values: 
    // 
    // - QuantityChangeInCapacity: adds or removes a specified number of ECS instances. 
    // - PercentChangeInCapacity: adds or removes a specified percentage of ECS instances. 
    // - TotalCapacity: adjusts the number of ECS instances in the scaling group to a specified number.
    shared_ptr<string> adjustmentType_ {};
    // The adjustment value of the scaling rule. This parameter is required and applicable only to simple scaling rules and step scaling rules. The number of ECS instances adjusted in a single operation cannot exceed 1,000. Valid values vary based on the adjustment method:
    // 
    // - QuantityChangeInCapacity: -1000 to 1000.
    // - PercentChangeInCapacity: -100 to 10000.
    // - TotalCapacity: 0 to 2000.
    shared_ptr<int32_t> adjustmentValue_ {};
    // The dimension values of the monitoring metric. This parameter is applicable to target tracking scaling rules and is configured when the monitoring metric requires additional dimension information. For example, the LoadBalancerRealServerAverageQps metric requires the rulePool dimension.
    shared_ptr<vector<ModifyScalingRuleRequest::AlarmDimensions>> alarmDimensions_ {};
    // The alert attributes.
    shared_ptr<ModifyScalingRuleRequest::AlarmOptions> alarmOptions_ {};
    // The cooldown time of the scaling rule. This parameter is applicable only to simple scaling rules.
    // 
    // Valid values: 0 to 86400. Unit: seconds.
    shared_ptr<int32_t> cooldown_ {};
    // Specifies whether to disable scale-in. This parameter is applicable only to target tracking scaling rules.
    shared_ptr<bool> disableScaleIn_ {};
    // The warmup period of instances. This parameter is applicable to target tracking scaling rules and step scaling rules. ECS instances in the warmup state are added to the scaling group as usual, but they do not report monitoring data to CloudMonitor during the warmup period.
    // 
    // > When the system dynamically calculates the number of ECS instances to scale out or scale in, instances in the warmup state are not counted as existing instances.
    // 
    // Valid values: 0 to 86400. Unit: seconds.
    shared_ptr<int32_t> estimatedInstanceWarmup_ {};
    // The Hybrid Cloud Monitoring monitoring metrics settings. For more information about how to configure the settings, see [Use formula operations to customize target tracking scaling rules](https://help.aliyun.com/document_detail/2852162.html).
    shared_ptr<vector<ModifyScalingRuleRequest::HybridMetrics>> hybridMetrics_ {};
    // The ID of the Hybrid Cloud Monitoring monitoring metrics repository.
    // 
    // For more information about how to manage monitoring metrics repositories, see [Manage monitoring metrics repositories](https://help.aliyun.com/document_detail/217606.html).
    shared_ptr<string> hybridMonitorNamespace_ {};
    // The maximum number of instances in the scaling group. This parameter is used together with `PredictiveValueBehavior`.
    shared_ptr<int32_t> initialMaxSize_ {};
    // The predefined monitoring metric. This parameter is required and applicable to target tracking scaling rules and predictive scaling rules.
    // 
    // Valid values for target tracking scaling rules:
    // 
    // - CpuUtilizationAgent: the CPU utilization collected by the CloudMonitor agent (recommended).
    // - MemoryUtilization: the memory usage collected by the CloudMonitor agent (recommended).
    // - CpuUtilization: the average CPU utilization of ECS instances.
    // - IntranetTx: the average outbound internal traffic of ECS instances.
    // - IntranetRx: the average inbound internal traffic of ECS instances.
    // - VpcInternetTx: the average outbound Internet traffic of ECS instances.
    // - VpcInternetRx: the average inbound Internet traffic of ECS instances.
    // - LoadBalancerRealServerAverageQps: the average queries per second (QPS) per backend server in an Application Load Balancer (ALB) server group.
    // 
    // Valid values for predictive scaling rules:
    // 
    // - CpuUtilization: the average CPU utilization of ECS instances.
    // - IntranetRx: the average inbound internal traffic of ECS instances.
    // - IntranetTx: the average outbound internal traffic of ECS instances.
    // 
    // For more information, see [System monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74854.html).
    shared_ptr<string> metricName_ {};
    // The type of the monitoring metric. Valid values:
    // 
    // - system: uses system metrics of CloudMonitor.
    // - custom: uses custom metrics reported to CloudMonitor.
    // - hybrid: uses metrics of Hybrid Cloud Monitoring.
    shared_ptr<string> metricType_ {};
    // The minimum number of instances to adjust. This parameter takes effect only when the scaling rule type is SimpleScalingRule or StepScalingRule and `AdjustmentType` is set to `PercentChangeInCapacity`.
    shared_ptr<int32_t> minAdjustmentMagnitude_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The mode of the predictive scaling rule. Valid values:
    // 
    // - PredictAndScale: generates prediction results and creates predictive tasks.
    // - PredictOnly: generates prediction results but does not create predictive tasks.
    shared_ptr<string> predictiveScalingMode_ {};
    // By default, predictive tasks automatically created by predictive scaling rules are executed on the hour. You can set a pre-start time to execute the predictive tasks in advance and prepare resources. Valid values: 0 to 60. Unit: minutes.
    shared_ptr<int32_t> predictiveTaskBufferTime_ {};
    // The method to handle the maximum value for the predictive scaling rule. Valid values:
    // 
    // - MaxOverridePredictiveValue: the initial maximum value overrides the predicted value. If the predicted value is greater than the initial maximum value, the initial maximum value is used as the maximum value for the predictive task.
    // - PredictiveValueOverrideMax: the predicted value overrides the initial maximum value. If the predicted value is greater than the initial maximum value, the predicted value is used as the maximum value for the predictive task.
    // - PredictiveValueOverrideMaxWithBuffer: a buffer ratio is added to the predicted value. The predicted value is increased by the ratio specified by PredictiveValueBuffer. If the increased value is greater than the initial maximum value, the increased value is used.
    shared_ptr<string> predictiveValueBehavior_ {};
    // The buffer ratio added to the predicted value. This parameter takes effect only when `PredictiveValueBehavior` is set to `PredictiveValueOverrideMaxWithBuffer`. The predicted value is increased by this ratio. If the increased value is greater than the initial maximum value, the increased value is used. Valid values: 0 to 100.
    shared_ptr<int32_t> predictiveValueBuffer_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // After a target tracking scaling rule is created, an event-triggered task is automatically created. This parameter specifies the number of consecutive times that the threshold condition must be met before the scale-in event-triggered task triggers an alert.
    shared_ptr<int32_t> scaleInEvaluationCount_ {};
    // After a target tracking scaling rule is created, an event-triggered task is automatically created. This parameter specifies the number of consecutive times that the threshold condition must be met before the scale-out event-triggered task triggers an alert.
    shared_ptr<int32_t> scaleOutEvaluationCount_ {};
    // The ID of the scaling rule that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleId_ {};
    // The name of the scaling rule. The name must be 2 to 64 characters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter or digit. The scaling rule name must be unique within a scaling group in a region for an Alibaba Cloud account.
    shared_ptr<string> scalingRuleName_ {};
    // The set of instance scaling configurations for step adjustments.
    shared_ptr<vector<ModifyScalingRuleRequest::StepAdjustments>> stepAdjustments_ {};
    // The target value. This parameter is applicable to target tracking scaling rules and predictive scaling rules. The value can have up to three decimal places and must be greater than 0.
    shared_ptr<float> targetValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
