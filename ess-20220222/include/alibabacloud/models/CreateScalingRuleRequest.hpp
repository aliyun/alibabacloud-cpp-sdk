// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGRULEREQUEST_HPP_
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
      // The upper boundary of the step adjustment. Valid values: -9.999999E18 to 9.999999E18.
      shared_ptr<float> metricIntervalUpperBound_ {};
      // The number of instances to be scaled for the step adjustment. This parameter is applicable only to step scaling rules.
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
        // The dimension key of the metric.
        shared_ptr<string> dimensionKey_ {};
        // The dimension value of the metric.
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
      // The dimensions of the metric. Used to specify the resources monitored by the metric.
      shared_ptr<vector<HybridMetrics::Dimensions>> dimensions_ {};
      // The metric operation expression for multiple Hybrid Cloud Monitoring metrics. The calculation result of the expression is used to trigger scaling.
      // 
      // The operation expression must comply with the Reverse Polish Notation (RPN) specification, and only the `+`, `-`, `*`, and `/` operators are supported.
      shared_ptr<string> expression_ {};
      // The reference ID of the metric in the metric operation expression.
      shared_ptr<string> id_ {};
      // The name of the monitoring metrics in the monitoring metrics repository for Hybrid Cloud Monitoring.
      shared_ptr<string> metricName_ {};
      // The statistical method of the metric. Valid values:
      // - Average: the average value of all data points within the specified period.
      // - Minimum: the minimum value of all data points within the specified period.
      // - Maximum: the maximum value of all data points within the specified period.
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
      // The period for collecting metric data in the target tracking scaling rule. Unit: seconds. Valid values:
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
      // The dimension key associated with the metric.
      shared_ptr<string> dimensionKey_ {};
      // The dimension value associated with the metric.
      shared_ptr<string> dimensionValue_ {};
    };

    virtual bool empty() const override { return this->adjustmentType_ == nullptr
        && this->adjustmentValue_ == nullptr && this->alarmDimensions_ == nullptr && this->alarmOptions_ == nullptr && this->cooldown_ == nullptr && this->disableScaleIn_ == nullptr
        && this->estimatedInstanceWarmup_ == nullptr && this->hybridMetrics_ == nullptr && this->hybridMonitorNamespace_ == nullptr && this->initialMaxSize_ == nullptr && this->metricName_ == nullptr
        && this->metricType_ == nullptr && this->minAdjustmentMagnitude_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->predictiveScalingMode_ == nullptr
        && this->predictiveTaskBufferTime_ == nullptr && this->predictiveValueBehavior_ == nullptr && this->predictiveValueBuffer_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->scaleInEvaluationCount_ == nullptr && this->scaleOutEvaluationCount_ == nullptr && this->scalingGroupId_ == nullptr && this->scalingRuleName_ == nullptr && this->scalingRuleType_ == nullptr
        && this->stepAdjustments_ == nullptr && this->targetValue_ == nullptr; };
    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string getAdjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline CreateScalingRuleRequest& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline CreateScalingRuleRequest& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // alarmDimensions Field Functions 
    bool hasAlarmDimensions() const { return this->alarmDimensions_ != nullptr;};
    void deleteAlarmDimensions() { this->alarmDimensions_ = nullptr;};
    inline const vector<CreateScalingRuleRequest::AlarmDimensions> & getAlarmDimensions() const { DARABONBA_PTR_GET_CONST(alarmDimensions_, vector<CreateScalingRuleRequest::AlarmDimensions>) };
    inline vector<CreateScalingRuleRequest::AlarmDimensions> getAlarmDimensions() { DARABONBA_PTR_GET(alarmDimensions_, vector<CreateScalingRuleRequest::AlarmDimensions>) };
    inline CreateScalingRuleRequest& setAlarmDimensions(const vector<CreateScalingRuleRequest::AlarmDimensions> & alarmDimensions) { DARABONBA_PTR_SET_VALUE(alarmDimensions_, alarmDimensions) };
    inline CreateScalingRuleRequest& setAlarmDimensions(vector<CreateScalingRuleRequest::AlarmDimensions> && alarmDimensions) { DARABONBA_PTR_SET_RVALUE(alarmDimensions_, alarmDimensions) };


    // alarmOptions Field Functions 
    bool hasAlarmOptions() const { return this->alarmOptions_ != nullptr;};
    void deleteAlarmOptions() { this->alarmOptions_ = nullptr;};
    inline const CreateScalingRuleRequest::AlarmOptions & getAlarmOptions() const { DARABONBA_PTR_GET_CONST(alarmOptions_, CreateScalingRuleRequest::AlarmOptions) };
    inline CreateScalingRuleRequest::AlarmOptions getAlarmOptions() { DARABONBA_PTR_GET(alarmOptions_, CreateScalingRuleRequest::AlarmOptions) };
    inline CreateScalingRuleRequest& setAlarmOptions(const CreateScalingRuleRequest::AlarmOptions & alarmOptions) { DARABONBA_PTR_SET_VALUE(alarmOptions_, alarmOptions) };
    inline CreateScalingRuleRequest& setAlarmOptions(CreateScalingRuleRequest::AlarmOptions && alarmOptions) { DARABONBA_PTR_SET_RVALUE(alarmOptions_, alarmOptions) };


    // cooldown Field Functions 
    bool hasCooldown() const { return this->cooldown_ != nullptr;};
    void deleteCooldown() { this->cooldown_ = nullptr;};
    inline int32_t getCooldown() const { DARABONBA_PTR_GET_DEFAULT(cooldown_, 0) };
    inline CreateScalingRuleRequest& setCooldown(int32_t cooldown) { DARABONBA_PTR_SET_VALUE(cooldown_, cooldown) };


    // disableScaleIn Field Functions 
    bool hasDisableScaleIn() const { return this->disableScaleIn_ != nullptr;};
    void deleteDisableScaleIn() { this->disableScaleIn_ = nullptr;};
    inline bool getDisableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(disableScaleIn_, false) };
    inline CreateScalingRuleRequest& setDisableScaleIn(bool disableScaleIn) { DARABONBA_PTR_SET_VALUE(disableScaleIn_, disableScaleIn) };


    // estimatedInstanceWarmup Field Functions 
    bool hasEstimatedInstanceWarmup() const { return this->estimatedInstanceWarmup_ != nullptr;};
    void deleteEstimatedInstanceWarmup() { this->estimatedInstanceWarmup_ = nullptr;};
    inline int32_t getEstimatedInstanceWarmup() const { DARABONBA_PTR_GET_DEFAULT(estimatedInstanceWarmup_, 0) };
    inline CreateScalingRuleRequest& setEstimatedInstanceWarmup(int32_t estimatedInstanceWarmup) { DARABONBA_PTR_SET_VALUE(estimatedInstanceWarmup_, estimatedInstanceWarmup) };


    // hybridMetrics Field Functions 
    bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
    void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
    inline const vector<CreateScalingRuleRequest::HybridMetrics> & getHybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<CreateScalingRuleRequest::HybridMetrics>) };
    inline vector<CreateScalingRuleRequest::HybridMetrics> getHybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<CreateScalingRuleRequest::HybridMetrics>) };
    inline CreateScalingRuleRequest& setHybridMetrics(const vector<CreateScalingRuleRequest::HybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
    inline CreateScalingRuleRequest& setHybridMetrics(vector<CreateScalingRuleRequest::HybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


    // hybridMonitorNamespace Field Functions 
    bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
    void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
    inline string getHybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
    inline CreateScalingRuleRequest& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


    // initialMaxSize Field Functions 
    bool hasInitialMaxSize() const { return this->initialMaxSize_ != nullptr;};
    void deleteInitialMaxSize() { this->initialMaxSize_ = nullptr;};
    inline int32_t getInitialMaxSize() const { DARABONBA_PTR_GET_DEFAULT(initialMaxSize_, 0) };
    inline CreateScalingRuleRequest& setInitialMaxSize(int32_t initialMaxSize) { DARABONBA_PTR_SET_VALUE(initialMaxSize_, initialMaxSize) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateScalingRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline CreateScalingRuleRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // minAdjustmentMagnitude Field Functions 
    bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
    void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
    inline int32_t getMinAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
    inline CreateScalingRuleRequest& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScalingRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScalingRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // predictiveScalingMode Field Functions 
    bool hasPredictiveScalingMode() const { return this->predictiveScalingMode_ != nullptr;};
    void deletePredictiveScalingMode() { this->predictiveScalingMode_ = nullptr;};
    inline string getPredictiveScalingMode() const { DARABONBA_PTR_GET_DEFAULT(predictiveScalingMode_, "") };
    inline CreateScalingRuleRequest& setPredictiveScalingMode(string predictiveScalingMode) { DARABONBA_PTR_SET_VALUE(predictiveScalingMode_, predictiveScalingMode) };


    // predictiveTaskBufferTime Field Functions 
    bool hasPredictiveTaskBufferTime() const { return this->predictiveTaskBufferTime_ != nullptr;};
    void deletePredictiveTaskBufferTime() { this->predictiveTaskBufferTime_ = nullptr;};
    inline int32_t getPredictiveTaskBufferTime() const { DARABONBA_PTR_GET_DEFAULT(predictiveTaskBufferTime_, 0) };
    inline CreateScalingRuleRequest& setPredictiveTaskBufferTime(int32_t predictiveTaskBufferTime) { DARABONBA_PTR_SET_VALUE(predictiveTaskBufferTime_, predictiveTaskBufferTime) };


    // predictiveValueBehavior Field Functions 
    bool hasPredictiveValueBehavior() const { return this->predictiveValueBehavior_ != nullptr;};
    void deletePredictiveValueBehavior() { this->predictiveValueBehavior_ = nullptr;};
    inline string getPredictiveValueBehavior() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBehavior_, "") };
    inline CreateScalingRuleRequest& setPredictiveValueBehavior(string predictiveValueBehavior) { DARABONBA_PTR_SET_VALUE(predictiveValueBehavior_, predictiveValueBehavior) };


    // predictiveValueBuffer Field Functions 
    bool hasPredictiveValueBuffer() const { return this->predictiveValueBuffer_ != nullptr;};
    void deletePredictiveValueBuffer() { this->predictiveValueBuffer_ = nullptr;};
    inline int32_t getPredictiveValueBuffer() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBuffer_, 0) };
    inline CreateScalingRuleRequest& setPredictiveValueBuffer(int32_t predictiveValueBuffer) { DARABONBA_PTR_SET_VALUE(predictiveValueBuffer_, predictiveValueBuffer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateScalingRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScalingRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scaleInEvaluationCount Field Functions 
    bool hasScaleInEvaluationCount() const { return this->scaleInEvaluationCount_ != nullptr;};
    void deleteScaleInEvaluationCount() { this->scaleInEvaluationCount_ = nullptr;};
    inline int32_t getScaleInEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleInEvaluationCount_, 0) };
    inline CreateScalingRuleRequest& setScaleInEvaluationCount(int32_t scaleInEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleInEvaluationCount_, scaleInEvaluationCount) };


    // scaleOutEvaluationCount Field Functions 
    bool hasScaleOutEvaluationCount() const { return this->scaleOutEvaluationCount_ != nullptr;};
    void deleteScaleOutEvaluationCount() { this->scaleOutEvaluationCount_ = nullptr;};
    inline int32_t getScaleOutEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleOutEvaluationCount_, 0) };
    inline CreateScalingRuleRequest& setScaleOutEvaluationCount(int32_t scaleOutEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleOutEvaluationCount_, scaleOutEvaluationCount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateScalingRuleRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline CreateScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string getScalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline CreateScalingRuleRequest& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


    // stepAdjustments Field Functions 
    bool hasStepAdjustments() const { return this->stepAdjustments_ != nullptr;};
    void deleteStepAdjustments() { this->stepAdjustments_ = nullptr;};
    inline const vector<CreateScalingRuleRequest::StepAdjustments> & getStepAdjustments() const { DARABONBA_PTR_GET_CONST(stepAdjustments_, vector<CreateScalingRuleRequest::StepAdjustments>) };
    inline vector<CreateScalingRuleRequest::StepAdjustments> getStepAdjustments() { DARABONBA_PTR_GET(stepAdjustments_, vector<CreateScalingRuleRequest::StepAdjustments>) };
    inline CreateScalingRuleRequest& setStepAdjustments(const vector<CreateScalingRuleRequest::StepAdjustments> & stepAdjustments) { DARABONBA_PTR_SET_VALUE(stepAdjustments_, stepAdjustments) };
    inline CreateScalingRuleRequest& setStepAdjustments(vector<CreateScalingRuleRequest::StepAdjustments> && stepAdjustments) { DARABONBA_PTR_SET_RVALUE(stepAdjustments_, stepAdjustments) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline float getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0.0) };
    inline CreateScalingRuleRequest& setTargetValue(float targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The adjustment method of the scaling rule. This parameter is required for simple scaling rules and step scaling rules. Valid values:
    // 
    // - QuantityChangeInCapacity: adds or removes a specified number of ECS instances.
    // - PercentChangeInCapacity: adds or removes a specified percentage of ECS instances.
    // - TotalCapacity: adjusts the number of ECS instances in the scaling group to a specified number.
    shared_ptr<string> adjustmentType_ {};
    // The adjustment value of the scaling rule. This parameter is required for simple scaling rules and step scaling rules. The number of ECS instances adjusted in a single operation cannot exceed 1,000. Valid values vary based on the adjustment method:
    // - QuantityChangeInCapacity: -1000 to 1000.
    // - PercentChangeInCapacity: -100 to 10000.
    // - TotalCapacity: 0 to 2000.
    shared_ptr<int32_t> adjustmentValue_ {};
    // The dimension information of the metric. This parameter is applicable to target tracking scaling rules and is configured when the metric requires additional dimension information. For example, the LoadBalancerRealServerAverageQps metric requires the dimension key-value information of rulePool.
    shared_ptr<vector<CreateScalingRuleRequest::AlarmDimensions>> alarmDimensions_ {};
    // The definition of alert attributes.
    shared_ptr<CreateScalingRuleRequest::AlarmOptions> alarmOptions_ {};
    // The cooldown time of the scaling rule. This parameter is applicable only to simple scaling rules. Valid values: 0 to 86400. Unit: seconds.
    // 
    // Default value: none.
    shared_ptr<int32_t> cooldown_ {};
    // Specifies whether to disable scale-in. This parameter is applicable only to target tracking scaling rules.
    // 
    // Default value: false.
    shared_ptr<bool> disableScaleIn_ {};
    // The warmup time of instances. This parameter is applicable to target tracking scaling rules and step scaling rules. ECS instances in the warmup state are added to the scaling group normally, but they do not report monitoring data to CloudMonitor during the warmup period.
    // 
    // > When dynamically calculating the number of ECS instances to be scaled, instances in the warmup state are not counted in the current number of instances.
    // 
    // Valid values: 0 to 86400. Unit: seconds.
    // 
    // Default value: 300.
    shared_ptr<int32_t> estimatedInstanceWarmup_ {};
    // The metric settings for Hybrid Cloud Monitoring. For more information about how to configure the settings, see [Customize target tracking scaling rules by using formula operations](https://help.aliyun.com/document_detail/2852162.html).
    shared_ptr<vector<CreateScalingRuleRequest::HybridMetrics>> hybridMetrics_ {};
    // The ID of the monitoring metrics repository for Hybrid Cloud Monitoring.
    // 
    // For more information about managing monitoring metrics repositories, see [Manage monitoring metrics repositories](https://help.aliyun.com/document_detail/217606.html).
    shared_ptr<string> hybridMonitorNamespace_ {};
    // The maximum number of instances in the scaling group. This parameter is used in combination with `PredictiveValueBehavior`.
    // 
    // Default value: the maximum number of instances in the scaling group (the value of MaxSize).
    shared_ptr<int32_t> initialMaxSize_ {};
    // The predefined metric. This parameter is required for target tracking scaling rules and predictive scaling rules.
    // 
    // Valid values for target tracking scaling rules: 
    // - CpuUtilizationAgent: (Agent) CPU utilization (recommended).
    // - MemoryUtilization: (Agent) memory usage (recommended).
    // - CpuUtilization: (ECS) average CPU utilization.
    // - IntranetTx: (ECS) average outbound traffic over the internal network.
    // - IntranetRx: (ECS) average inbound traffic over the internal network.
    // - VpcInternetTx: (ECS) average outbound traffic over the Internet.
    // - VpcInternetRx: (ECS) average inbound traffic over the Internet.
    // - LoadBalancerRealServerAverageQps: (ALB) average QPS per backend server in a server group.
    // 
    // Valid values for predictive scaling rules: 
    // - CpuUtilization: (ECS) average CPU utilization.
    // - IntranetRx: (ECS) average inbound traffic over the internal network.
    // - IntranetTx: (ECS) average outbound traffic over the internal network.
    // 
    // For more information, see [System monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74854.html).
    shared_ptr<string> metricName_ {};
    // The type of the metric. Valid values:
    // 
    // - system: uses system metrics of CloudMonitor.
    // - custom: uses custom metrics reported to CloudMonitor.
    // - hybrid: uses metrics of Hybrid Cloud Monitoring.
    shared_ptr<string> metricType_ {};
    // The minimum number of instances to be adjusted. This parameter takes effect only when the scaling rule type is SimpleScalingRule or StepScalingRule and AdjustmentType is set to PercentChangeInCapacity.
    shared_ptr<int32_t> minAdjustmentMagnitude_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The mode of the predictive scaling rule. Valid values:
    // 
    // - PredictAndScale: generates prediction results and creates predictive tasks.
    // - PredictOnly: generates prediction results but does not create predictive tasks.
    // 
    // Default value: PredictAndScale.
    shared_ptr<string> predictiveScalingMode_ {};
    // The predictive tasks automatically created by predictive scaling rules are executed on the hour by default. You can set the pre-startup time to execute the predictive tasks in advance and prepare resources beforehand. Valid values: 0 to 60. Unit: minutes.
    // 
    // Default value: 0.
    shared_ptr<int32_t> predictiveTaskBufferTime_ {};
    // The processing method for the maximum value of the predictive scaling rule. Valid values:
    // 
    // - MaxOverridePredictiveValue: The initial maximum value overrides the predicted value. If the predicted value is greater than the initial maximum value, the maximum value of the predictive task uses the initial maximum value.
    // - PredictiveValueOverrideMax: The predicted value overrides the initial maximum value. If the predicted value is greater than the initial maximum value, the maximum value of the predictive task uses the predicted value.
    // - PredictiveValueOverrideMaxWithBuffer: A buffer ratio is added to the predicted value. The predicted value is increased by the ratio specified by PredictiveValueBuffer. If the increased value is greater than the initial maximum value, the increased value is used.
    // 
    // Default value: MaxOverridePredictiveValue.
    shared_ptr<string> predictiveValueBehavior_ {};
    // This parameter takes effect only when `PredictiveValueBehavior` is set to `PredictiveValueOverrideMaxWithBuffer`. The predicted value is increased by this ratio. If the increased value is greater than the initial maximum value, the increased value is used. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> predictiveValueBuffer_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // After a target tracking scaling rule is created, an event-triggered task is automatically created. This parameter specifies the number of consecutive times the threshold condition must be met before the corresponding scale-in event-triggered task triggers an alert.
    // 
    // Default value: 15.
    shared_ptr<int32_t> scaleInEvaluationCount_ {};
    // After a target tracking scaling rule is created, an event-triggered task is automatically created. This parameter specifies the number of consecutive times the threshold condition must be met before the corresponding scale-out event-triggered task triggers an alert.
    // 
    // Default value: 3.
    shared_ptr<int32_t> scaleOutEvaluationCount_ {};
    // The ID of the scaling group to which the scaling rule belongs.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The name of the scaling rule. The name must be 2 to 64 characters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter, digit, or Chinese character.
    // 
    // The name of a scaling rule must be unique within a scaling group in a region for an Alibaba Cloud account.
    // 
    // If this parameter is not specified, the value of ScalingRuleId is used by default.
    shared_ptr<string> scalingRuleName_ {};
    // The type of the scaling rule. Valid values:
    // 
    // - SimpleScalingRule: simple scaling rule. Adjusts the number of ECS or ECI instances based on the adjustment method (AdjustmentType) and adjustment value (AdjustmentValue).
    // - TargetTrackingScalingRule: target tracking scaling rule. Dynamically calculates the number of ECS or ECI instances for scale-out or scale-in based on a predefined metric (MetricName) to keep the metric value close to the target value (TargetValue).
    // - StepScalingRule: step scaling rule. Provides a step-by-step scaling method based on thresholds and metric values.
    // - PredictiveScalingRule: predictive scaling rule. Analyzes historical monitoring data of the scaling group based on machine learning capabilities to predict future metric values, and supports the automatic creation of scheduled tasks to configure the boundary values of the scaling group.
    // 
    // Default value: SimpleScalingRule.
    shared_ptr<string> scalingRuleType_ {};
    // The collection of instance scaling information corresponding to step adjustments.
    shared_ptr<vector<CreateScalingRuleRequest::StepAdjustments>> stepAdjustments_ {};
    // The target value. This parameter is required for target tracking scaling rules and predictive scaling rules. The value of TargetValue can be rounded to three decimal places and must be greater than 0.
    shared_ptr<float> targetValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
