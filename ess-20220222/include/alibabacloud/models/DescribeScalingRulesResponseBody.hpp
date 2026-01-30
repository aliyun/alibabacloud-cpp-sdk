// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODY_HPP_
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
  class DescribeScalingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScalingRulesResponseBody() = default ;
    DescribeScalingRulesResponseBody(const DescribeScalingRulesResponseBody &) = default ;
    DescribeScalingRulesResponseBody(DescribeScalingRulesResponseBody &&) = default ;
    DescribeScalingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingRulesResponseBody() = default ;
    DescribeScalingRulesResponseBody& operator=(const DescribeScalingRulesResponseBody &) = default ;
    DescribeScalingRulesResponseBody& operator=(DescribeScalingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ScalingRules& obj) { 
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
      ScalingRules() = default ;
      ScalingRules(const ScalingRules &) = default ;
      ScalingRules(ScalingRules &&) = default ;
      ScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingRules() = default ;
      ScalingRules& operator=(const ScalingRules &) = default ;
      ScalingRules& operator=(ScalingRules &&) = default ;
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
        // The lower limit of a step adjustment. Valid values: -9.999999E18 to 9.999999E18.
        shared_ptr<float> metricIntervalLowerBound_ {};
        // The upper limit of a step adjustment. Valid values: -9.999999E18 to 9.999999E18.
        shared_ptr<float> metricIntervalUpperBound_ {};
        // The number of ECS instances that are scaled in a step adjustment.
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
          // The key of the metric dimension.
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
        // The metric dimensions. This parameter is used to specify the monitored resources.
        shared_ptr<vector<HybridMetrics::Dimensions>> dimensions_ {};
        // The metric expression that consists of multiple Hybrid Cloud Monitoring metrics. It calculates a result used to trigger scaling events.
        // 
        // The expression is written in Reverse Polish Notation (RPN) format and supports only the following operators: `+, -, *, /`.
        shared_ptr<string> expression_ {};
        // The reference ID of the metric in the metric expression.
        shared_ptr<string> id_ {};
        // The name of the Hybrid Cloud Monitoring metric.
        shared_ptr<string> metricName_ {};
        // The statistical method of the metric value. Valid values:
        // 
        // *   Average: The average value of all metric values within a specified interval is calculated.
        // *   Minimum: The minimum value of all metric values within a specified interval is calculated.
        // *   Maximum: The maximum value of all metric values within a specified interval is calculated.
        shared_ptr<string> statistic_ {};
      };

      class Alarms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Alarms& obj) { 
          DARABONBA_PTR_TO_JSON(AlarmTaskId, alarmTaskId_);
          DARABONBA_PTR_TO_JSON(AlarmTaskName, alarmTaskName_);
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(MetricType, metricType_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, Alarms& obj) { 
          DARABONBA_PTR_FROM_JSON(AlarmTaskId, alarmTaskId_);
          DARABONBA_PTR_FROM_JSON(AlarmTaskName, alarmTaskName_);
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        Alarms() = default ;
        Alarms(const Alarms &) = default ;
        Alarms(Alarms &&) = default ;
        Alarms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Alarms() = default ;
        Alarms& operator=(const Alarms &) = default ;
        Alarms& operator=(Alarms &&) = default ;
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
          // The key of the dimension that is associated with the metric. Valid values:
          // 
          // *   ScalingGroupId: the ID of the scaling group.
          // *   userId: the ID of the user account.
          shared_ptr<string> dimensionKey_ {};
          // The value of the dimension that is associated with the metric.
          shared_ptr<string> dimensionValue_ {};
        };

        virtual bool empty() const override { return this->alarmTaskId_ == nullptr
        && this->alarmTaskName_ == nullptr && this->comparisonOperator_ == nullptr && this->dimensions_ == nullptr && this->evaluationCount_ == nullptr && this->metricName_ == nullptr
        && this->metricType_ == nullptr && this->period_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
        // alarmTaskId Field Functions 
        bool hasAlarmTaskId() const { return this->alarmTaskId_ != nullptr;};
        void deleteAlarmTaskId() { this->alarmTaskId_ = nullptr;};
        inline string getAlarmTaskId() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskId_, "") };
        inline Alarms& setAlarmTaskId(string alarmTaskId) { DARABONBA_PTR_SET_VALUE(alarmTaskId_, alarmTaskId) };


        // alarmTaskName Field Functions 
        bool hasAlarmTaskName() const { return this->alarmTaskName_ != nullptr;};
        void deleteAlarmTaskName() { this->alarmTaskName_ = nullptr;};
        inline string getAlarmTaskName() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskName_, "") };
        inline Alarms& setAlarmTaskName(string alarmTaskName) { DARABONBA_PTR_SET_VALUE(alarmTaskName_, alarmTaskName) };


        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Alarms& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline const vector<Alarms::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Alarms::Dimensions>) };
        inline vector<Alarms::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<Alarms::Dimensions>) };
        inline Alarms& setDimensions(const vector<Alarms::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
        inline Alarms& setDimensions(vector<Alarms::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


        // evaluationCount Field Functions 
        bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
        void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
        inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
        inline Alarms& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Alarms& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // metricType Field Functions 
        bool hasMetricType() const { return this->metricType_ != nullptr;};
        void deleteMetricType() { this->metricType_ = nullptr;};
        inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
        inline Alarms& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
        inline Alarms& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Alarms& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline Alarms& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // The ID of the event-triggered task that is associated with the scaling rule.
        shared_ptr<string> alarmTaskId_ {};
        // The name of the event-triggered task that is associated with the scaling rule.
        shared_ptr<string> alarmTaskName_ {};
        // The comparison operator between the statistical value and the threshold of the metric of the event-triggered task that is associated with the scaling rule. The comparison operator indicates the relationship in which the metric value and the metric threshold can meet the alert condition.
        // 
        // *   Valid value if the metric value is greater than or equal to the threshold: >=
        // *   Valid value if the metric value is less than or equal to the threshold: <=
        // *   Valid value if the metric value is greater than the threshold: >
        // *   Valid value if the metric value is less than the threshold: <
        shared_ptr<string> comparisonOperator_ {};
        // The dimensions of the event-triggered task that is associated with the scaling rule.
        shared_ptr<vector<Alarms::Dimensions>> dimensions_ {};
        // The number of consecutive times when the event-triggered task that is associated with the scaling rule must meet the alert condition before an alert is triggered.
        shared_ptr<int32_t> evaluationCount_ {};
        // The name of the metric of the event-triggered task that is associated with the scaling rule.
        shared_ptr<string> metricName_ {};
        // The type of the metric of the event-triggered task that is associated with the scaling rule. Valid values:
        // 
        // *   system: system metrics
        // *   custom: custom metrics
        shared_ptr<string> metricType_ {};
        // The statistical period of the metric data in the target tracking scaling rule.
        shared_ptr<int32_t> period_ {};
        // The statistical method of the event-triggered task that is associated with the scaling rule. Valid values:
        // 
        // *   Average
        // *   Maximum
        // *   Minimum
        shared_ptr<string> statistics_ {};
        // The alert threshold of the event-triggered task that is associated with the scaling rule.
        shared_ptr<float> threshold_ {};
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
        // The dimension key of the metric.
        shared_ptr<string> dimensionKey_ {};
        // The dimension value of the metric.
        shared_ptr<string> dimensionValue_ {};
      };

      virtual bool empty() const override { return this->adjustmentType_ == nullptr
        && this->adjustmentValue_ == nullptr && this->alarmDimensions_ == nullptr && this->alarms_ == nullptr && this->cooldown_ == nullptr && this->disableScaleIn_ == nullptr
        && this->estimatedInstanceWarmup_ == nullptr && this->hybridMetrics_ == nullptr && this->hybridMonitorNamespace_ == nullptr && this->initialMaxSize_ == nullptr && this->maxSize_ == nullptr
        && this->metricName_ == nullptr && this->metricType_ == nullptr && this->minAdjustmentMagnitude_ == nullptr && this->minSize_ == nullptr && this->predictiveScalingMode_ == nullptr
        && this->predictiveTaskBufferTime_ == nullptr && this->predictiveValueBehavior_ == nullptr && this->predictiveValueBuffer_ == nullptr && this->scaleInEvaluationCount_ == nullptr && this->scaleOutEvaluationCount_ == nullptr
        && this->scalingGroupId_ == nullptr && this->scalingRuleAri_ == nullptr && this->scalingRuleId_ == nullptr && this->scalingRuleName_ == nullptr && this->scalingRuleType_ == nullptr
        && this->stepAdjustments_ == nullptr && this->targetValue_ == nullptr; };
      // adjustmentType Field Functions 
      bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
      void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
      inline string getAdjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
      inline ScalingRules& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


      // adjustmentValue Field Functions 
      bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
      void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
      inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
      inline ScalingRules& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


      // alarmDimensions Field Functions 
      bool hasAlarmDimensions() const { return this->alarmDimensions_ != nullptr;};
      void deleteAlarmDimensions() { this->alarmDimensions_ = nullptr;};
      inline const vector<ScalingRules::AlarmDimensions> & getAlarmDimensions() const { DARABONBA_PTR_GET_CONST(alarmDimensions_, vector<ScalingRules::AlarmDimensions>) };
      inline vector<ScalingRules::AlarmDimensions> getAlarmDimensions() { DARABONBA_PTR_GET(alarmDimensions_, vector<ScalingRules::AlarmDimensions>) };
      inline ScalingRules& setAlarmDimensions(const vector<ScalingRules::AlarmDimensions> & alarmDimensions) { DARABONBA_PTR_SET_VALUE(alarmDimensions_, alarmDimensions) };
      inline ScalingRules& setAlarmDimensions(vector<ScalingRules::AlarmDimensions> && alarmDimensions) { DARABONBA_PTR_SET_RVALUE(alarmDimensions_, alarmDimensions) };


      // alarms Field Functions 
      bool hasAlarms() const { return this->alarms_ != nullptr;};
      void deleteAlarms() { this->alarms_ = nullptr;};
      inline const vector<ScalingRules::Alarms> & getAlarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<ScalingRules::Alarms>) };
      inline vector<ScalingRules::Alarms> getAlarms() { DARABONBA_PTR_GET(alarms_, vector<ScalingRules::Alarms>) };
      inline ScalingRules& setAlarms(const vector<ScalingRules::Alarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
      inline ScalingRules& setAlarms(vector<ScalingRules::Alarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


      // cooldown Field Functions 
      bool hasCooldown() const { return this->cooldown_ != nullptr;};
      void deleteCooldown() { this->cooldown_ = nullptr;};
      inline int32_t getCooldown() const { DARABONBA_PTR_GET_DEFAULT(cooldown_, 0) };
      inline ScalingRules& setCooldown(int32_t cooldown) { DARABONBA_PTR_SET_VALUE(cooldown_, cooldown) };


      // disableScaleIn Field Functions 
      bool hasDisableScaleIn() const { return this->disableScaleIn_ != nullptr;};
      void deleteDisableScaleIn() { this->disableScaleIn_ = nullptr;};
      inline bool getDisableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(disableScaleIn_, false) };
      inline ScalingRules& setDisableScaleIn(bool disableScaleIn) { DARABONBA_PTR_SET_VALUE(disableScaleIn_, disableScaleIn) };


      // estimatedInstanceWarmup Field Functions 
      bool hasEstimatedInstanceWarmup() const { return this->estimatedInstanceWarmup_ != nullptr;};
      void deleteEstimatedInstanceWarmup() { this->estimatedInstanceWarmup_ = nullptr;};
      inline int32_t getEstimatedInstanceWarmup() const { DARABONBA_PTR_GET_DEFAULT(estimatedInstanceWarmup_, 0) };
      inline ScalingRules& setEstimatedInstanceWarmup(int32_t estimatedInstanceWarmup) { DARABONBA_PTR_SET_VALUE(estimatedInstanceWarmup_, estimatedInstanceWarmup) };


      // hybridMetrics Field Functions 
      bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
      void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
      inline const vector<ScalingRules::HybridMetrics> & getHybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<ScalingRules::HybridMetrics>) };
      inline vector<ScalingRules::HybridMetrics> getHybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<ScalingRules::HybridMetrics>) };
      inline ScalingRules& setHybridMetrics(const vector<ScalingRules::HybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
      inline ScalingRules& setHybridMetrics(vector<ScalingRules::HybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


      // hybridMonitorNamespace Field Functions 
      bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
      void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
      inline string getHybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
      inline ScalingRules& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


      // initialMaxSize Field Functions 
      bool hasInitialMaxSize() const { return this->initialMaxSize_ != nullptr;};
      void deleteInitialMaxSize() { this->initialMaxSize_ = nullptr;};
      inline int32_t getInitialMaxSize() const { DARABONBA_PTR_GET_DEFAULT(initialMaxSize_, 0) };
      inline ScalingRules& setInitialMaxSize(int32_t initialMaxSize) { DARABONBA_PTR_SET_VALUE(initialMaxSize_, initialMaxSize) };


      // maxSize Field Functions 
      bool hasMaxSize() const { return this->maxSize_ != nullptr;};
      void deleteMaxSize() { this->maxSize_ = nullptr;};
      inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
      inline ScalingRules& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline ScalingRules& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // metricType Field Functions 
      bool hasMetricType() const { return this->metricType_ != nullptr;};
      void deleteMetricType() { this->metricType_ = nullptr;};
      inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
      inline ScalingRules& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


      // minAdjustmentMagnitude Field Functions 
      bool hasMinAdjustmentMagnitude() const { return this->minAdjustmentMagnitude_ != nullptr;};
      void deleteMinAdjustmentMagnitude() { this->minAdjustmentMagnitude_ = nullptr;};
      inline int32_t getMinAdjustmentMagnitude() const { DARABONBA_PTR_GET_DEFAULT(minAdjustmentMagnitude_, 0) };
      inline ScalingRules& setMinAdjustmentMagnitude(int32_t minAdjustmentMagnitude) { DARABONBA_PTR_SET_VALUE(minAdjustmentMagnitude_, minAdjustmentMagnitude) };


      // minSize Field Functions 
      bool hasMinSize() const { return this->minSize_ != nullptr;};
      void deleteMinSize() { this->minSize_ = nullptr;};
      inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
      inline ScalingRules& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


      // predictiveScalingMode Field Functions 
      bool hasPredictiveScalingMode() const { return this->predictiveScalingMode_ != nullptr;};
      void deletePredictiveScalingMode() { this->predictiveScalingMode_ = nullptr;};
      inline string getPredictiveScalingMode() const { DARABONBA_PTR_GET_DEFAULT(predictiveScalingMode_, "") };
      inline ScalingRules& setPredictiveScalingMode(string predictiveScalingMode) { DARABONBA_PTR_SET_VALUE(predictiveScalingMode_, predictiveScalingMode) };


      // predictiveTaskBufferTime Field Functions 
      bool hasPredictiveTaskBufferTime() const { return this->predictiveTaskBufferTime_ != nullptr;};
      void deletePredictiveTaskBufferTime() { this->predictiveTaskBufferTime_ = nullptr;};
      inline int32_t getPredictiveTaskBufferTime() const { DARABONBA_PTR_GET_DEFAULT(predictiveTaskBufferTime_, 0) };
      inline ScalingRules& setPredictiveTaskBufferTime(int32_t predictiveTaskBufferTime) { DARABONBA_PTR_SET_VALUE(predictiveTaskBufferTime_, predictiveTaskBufferTime) };


      // predictiveValueBehavior Field Functions 
      bool hasPredictiveValueBehavior() const { return this->predictiveValueBehavior_ != nullptr;};
      void deletePredictiveValueBehavior() { this->predictiveValueBehavior_ = nullptr;};
      inline string getPredictiveValueBehavior() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBehavior_, "") };
      inline ScalingRules& setPredictiveValueBehavior(string predictiveValueBehavior) { DARABONBA_PTR_SET_VALUE(predictiveValueBehavior_, predictiveValueBehavior) };


      // predictiveValueBuffer Field Functions 
      bool hasPredictiveValueBuffer() const { return this->predictiveValueBuffer_ != nullptr;};
      void deletePredictiveValueBuffer() { this->predictiveValueBuffer_ = nullptr;};
      inline int32_t getPredictiveValueBuffer() const { DARABONBA_PTR_GET_DEFAULT(predictiveValueBuffer_, 0) };
      inline ScalingRules& setPredictiveValueBuffer(int32_t predictiveValueBuffer) { DARABONBA_PTR_SET_VALUE(predictiveValueBuffer_, predictiveValueBuffer) };


      // scaleInEvaluationCount Field Functions 
      bool hasScaleInEvaluationCount() const { return this->scaleInEvaluationCount_ != nullptr;};
      void deleteScaleInEvaluationCount() { this->scaleInEvaluationCount_ = nullptr;};
      inline int32_t getScaleInEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleInEvaluationCount_, 0) };
      inline ScalingRules& setScaleInEvaluationCount(int32_t scaleInEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleInEvaluationCount_, scaleInEvaluationCount) };


      // scaleOutEvaluationCount Field Functions 
      bool hasScaleOutEvaluationCount() const { return this->scaleOutEvaluationCount_ != nullptr;};
      void deleteScaleOutEvaluationCount() { this->scaleOutEvaluationCount_ = nullptr;};
      inline int32_t getScaleOutEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(scaleOutEvaluationCount_, 0) };
      inline ScalingRules& setScaleOutEvaluationCount(int32_t scaleOutEvaluationCount) { DARABONBA_PTR_SET_VALUE(scaleOutEvaluationCount_, scaleOutEvaluationCount) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScalingRules& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // scalingRuleAri Field Functions 
      bool hasScalingRuleAri() const { return this->scalingRuleAri_ != nullptr;};
      void deleteScalingRuleAri() { this->scalingRuleAri_ = nullptr;};
      inline string getScalingRuleAri() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleAri_, "") };
      inline ScalingRules& setScalingRuleAri(string scalingRuleAri) { DARABONBA_PTR_SET_VALUE(scalingRuleAri_, scalingRuleAri) };


      // scalingRuleId Field Functions 
      bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
      void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
      inline string getScalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
      inline ScalingRules& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


      // scalingRuleName Field Functions 
      bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
      void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
      inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
      inline ScalingRules& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


      // scalingRuleType Field Functions 
      bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
      void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
      inline string getScalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
      inline ScalingRules& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


      // stepAdjustments Field Functions 
      bool hasStepAdjustments() const { return this->stepAdjustments_ != nullptr;};
      void deleteStepAdjustments() { this->stepAdjustments_ = nullptr;};
      inline const vector<ScalingRules::StepAdjustments> & getStepAdjustments() const { DARABONBA_PTR_GET_CONST(stepAdjustments_, vector<ScalingRules::StepAdjustments>) };
      inline vector<ScalingRules::StepAdjustments> getStepAdjustments() { DARABONBA_PTR_GET(stepAdjustments_, vector<ScalingRules::StepAdjustments>) };
      inline ScalingRules& setStepAdjustments(const vector<ScalingRules::StepAdjustments> & stepAdjustments) { DARABONBA_PTR_SET_VALUE(stepAdjustments_, stepAdjustments) };
      inline ScalingRules& setStepAdjustments(vector<ScalingRules::StepAdjustments> && stepAdjustments) { DARABONBA_PTR_SET_RVALUE(stepAdjustments_, stepAdjustments) };


      // targetValue Field Functions 
      bool hasTargetValue() const { return this->targetValue_ != nullptr;};
      void deleteTargetValue() { this->targetValue_ = nullptr;};
      inline float getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0.0) };
      inline ScalingRules& setTargetValue(float targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    protected:
      // The adjustment method of the scaling rule. Valid values:
      // 
      // *   QuantityChangeInCapacity: adds or removes the specified number of Elastic Compute Service (ECS) instances to or from the scaling group.
      // *   PercentChangeInCapacity: adds or removes the specified percentage of ECS instances to or from the scaling group.
      // *   TotalCapacity: adjusts the number of ECS instances in the scaling group to the specified number.
      shared_ptr<string> adjustmentType_ {};
      // The number of instances that must be scaled based on the scaling rule.
      shared_ptr<int32_t> adjustmentValue_ {};
      // The dimensions. This parameter is applicable to target tracking scaling rules. You can specify this parameter if your predefined metric requires extra dimensions. For example, if you predefine the LoadBalancerRealServerAverageQps metric, you must use this parameter to specify the rulePool dimension.
      shared_ptr<vector<ScalingRules::AlarmDimensions>> alarmDimensions_ {};
      // The event-triggered tasks that are associated with the scaling rule. The value of this parameter is returned only if you set ShowAlarmRules to true. Otherwise, null is returned.
      shared_ptr<vector<ScalingRules::Alarms>> alarms_ {};
      // The cooldown period of the scaling rule. This parameter is available only if you set ScalingRuleType to SimpleScalingRule. Valid values: 0 to 86400. Unit: seconds.
      shared_ptr<int32_t> cooldown_ {};
      // Indicates whether scale-in is disabled. This parameter takes effect only if you set ScalingRuleType to TargetTrackingScalingRule. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> disableScaleIn_ {};
      // The warm-up period of instances. During the warm-up period, a series of preparation measures are taken for the new instances. Performance metrics of instances being warmed up are not counted towards the monitoring range.
      shared_ptr<int32_t> estimatedInstanceWarmup_ {};
      // The Hybrid Cloud Monitoring metrics. For more information, see [Create a custom target tracking scaling rule](https://help.aliyun.com/document_detail/2852162.html).
      shared_ptr<vector<ScalingRules::HybridMetrics>> hybridMetrics_ {};
      // The ID of the Hybrid Cloud Monitoring namespace.
      // 
      // For information about how to manage Hybrid Cloud Monitoring namespaces, see [Manage namespaces](https://help.aliyun.com/document_detail/217606.html).
      shared_ptr<string> hybridMonitorNamespace_ {};
      // The maximum number of ECS instances that can be contained in the scaling group. If you specify this parameter, you must also specify PredictiveValueBehavior.
      shared_ptr<int32_t> initialMaxSize_ {};
      // The maximum number of ECS instances that can be contained in the scaling group.
      shared_ptr<int32_t> maxSize_ {};
      // The name of the metric of the event-triggered task that is associated with the scaling rule.
      shared_ptr<string> metricName_ {};
      // The metric type. Valid values:
      // 
      // *   system: system metrics of CloudMonitor.
      // *   custom: custom metrics that are reported to CloudMonitor.
      // *   hybrid: metrics of Hybrid Cloud Monitoring.
      shared_ptr<string> metricType_ {};
      // The minimum number of instances that must be scaled. This parameter takes effect only if you set ScalingRuleType to SimpleScalingRule or StepScalingRule and set AdjustmentType to PercentChangeInCapacity.
      shared_ptr<int32_t> minAdjustmentMagnitude_ {};
      // The minimum number of ECS instances that must be contained in the scaling group.
      shared_ptr<int32_t> minSize_ {};
      // The mode of the predictive scaling rule. Valid values:
      // 
      // *   PredictAndScale: provides predictions and creates prediction tasks.
      // *   PredictOnly: provides predictions but does not create prediction tasks.
      shared_ptr<string> predictiveScalingMode_ {};
      // The amount of buffer time before prediction tasks are executed. By default, all prediction tasks that are automatically created based on a predictive scaling rule are executed on the hour. You can specify a buffer time for resource preparation before prediction tasks are executed. Valid values: 0 to 60. Unit: minutes.
      shared_ptr<int32_t> predictiveTaskBufferTime_ {};
      // The action on the predicted maximum value. Valid values:
      // 
      // *   MaxOverridePredictiveValue: uses the initial maximum capacity as the maximum value for prediction tasks if the predicted value is greater than the initial maximum capacity.
      // *   PredictiveValueOverrideMax: uses the predicted value as the maximum value for prediction tasks when the predicted value is greater than the initial maximum capacity.
      // *   PredictiveValueOverrideMaxWithBuffer: increases the predicted value by a ratio that is specified by PredictiveValueBuffer, and uses the increased value as the maximum value for prediction tasks if the predicted value increased by this ratio is greater than the initial maximum capacity.
      shared_ptr<string> predictiveValueBehavior_ {};
      // The ratio based on which the predicted value is increased when PredictiveValueBehavior is set to PredictiveValueOverrideMaxWithBuffer. If the predicted value increased by this ratio is greater than the initial maximum capacity, the increased value is used as the maximum value for prediction tasks. Valid values: 0 to 100.
      shared_ptr<int32_t> predictiveValueBuffer_ {};
      // The number of consecutive times that the event-triggered task for scale-in purposes must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and associated with the target tracking scaling rule.
      shared_ptr<int32_t> scaleInEvaluationCount_ {};
      // The number of consecutive times that the event-triggered task created for scale-out purposes must meet the threshold conditions before an alert is triggered. After a target tracking scaling rule is created, an event-triggered task is automatically created and associated with the target tracking scaling rule.
      shared_ptr<int32_t> scaleOutEvaluationCount_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The unique identifier of the scaling rule.
      shared_ptr<string> scalingRuleAri_ {};
      // The ID of the scaling rule.
      shared_ptr<string> scalingRuleId_ {};
      // The name of the scaling rule.
      shared_ptr<string> scalingRuleName_ {};
      // The type of the scaling rule. Valid values:
      // 
      // *   SimpleScalingRule: a simple scaling rule. Once a simple scaling rule is executed, Auto Scaling adjusts the number of ECS instances in the scaling group based on the values of AdjustmentType and AdjustmentValue.
      // *   TargetTrackingScalingRule: a target tracking scaling rule. Once a target tracking scaling rule is executed, Auto Scaling dynamically calculates the number of ECS instances or elastic container instances to scale based on the predefined metric (MetricName) and attempts to maintain the metric value close to the specified target value (TargetValue).
      // *   StepScalingRule: a step scaling rule. Once a step scaling rule is executed, Auto Scaling scales instances step by step based on the predefined thresholds and metric values.
      // *   PredictiveScalingRule: a predictive scaling rule. Once a predictive scaling rule is executed, Auto Scaling analyzes the historical monitoring data based on the machine learning technology and predicts the trends of metric data. Auto Scaling also creates scheduled tasks to enable dynamic adjustment of the boundary values for the scaling group.
      shared_ptr<string> scalingRuleType_ {};
      // The step adjustments of the step scaling rule.
      shared_ptr<vector<ScalingRules::StepAdjustments>> stepAdjustments_ {};
      // The target value of the metric. If you set ScalingRuleType to TargetTrackingScalingRule or PredictiveScalingRule, Auto Scaling keeps the metric value close to the target value by adding instances to or removing instances from the scaling group.
      shared_ptr<float> targetValue_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scalingRules_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<DescribeScalingRulesResponseBody::ScalingRules> & getScalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<DescribeScalingRulesResponseBody::ScalingRules>) };
    inline vector<DescribeScalingRulesResponseBody::ScalingRules> getScalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<DescribeScalingRulesResponseBody::ScalingRules>) };
    inline DescribeScalingRulesResponseBody& setScalingRules(const vector<DescribeScalingRulesResponseBody::ScalingRules> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline DescribeScalingRulesResponseBody& setScalingRules(vector<DescribeScalingRulesResponseBody::ScalingRules> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The scaling rules.
    shared_ptr<vector<DescribeScalingRulesResponseBody::ScalingRules>> scalingRules_ {};
    // The total number of scaling rules.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
