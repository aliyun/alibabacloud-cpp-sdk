// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULESALARMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESRESPONSEBODYSCALINGRULESALARMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingRulesResponseBodyScalingRulesAlarms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingRulesResponseBodyScalingRulesAlarms& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeScalingRulesResponseBodyScalingRulesAlarms& obj) { 
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
    DescribeScalingRulesResponseBodyScalingRulesAlarms() = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarms(const DescribeScalingRulesResponseBodyScalingRulesAlarms &) = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarms(DescribeScalingRulesResponseBodyScalingRulesAlarms &&) = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingRulesResponseBodyScalingRulesAlarms() = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarms& operator=(const DescribeScalingRulesResponseBodyScalingRulesAlarms &) = default ;
    DescribeScalingRulesResponseBodyScalingRulesAlarms& operator=(DescribeScalingRulesResponseBodyScalingRulesAlarms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmTaskId_ != nullptr
        && this->alarmTaskName_ != nullptr && this->comparisonOperator_ != nullptr && this->dimensions_ != nullptr && this->evaluationCount_ != nullptr && this->metricName_ != nullptr
        && this->metricType_ != nullptr && this->period_ != nullptr && this->statistics_ != nullptr && this->threshold_ != nullptr; };
    // alarmTaskId Field Functions 
    bool hasAlarmTaskId() const { return this->alarmTaskId_ != nullptr;};
    void deleteAlarmTaskId() { this->alarmTaskId_ = nullptr;};
    inline string alarmTaskId() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskId_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setAlarmTaskId(string alarmTaskId) { DARABONBA_PTR_SET_VALUE(alarmTaskId_, alarmTaskId) };


    // alarmTaskName Field Functions 
    bool hasAlarmTaskName() const { return this->alarmTaskName_ != nullptr;};
    void deleteAlarmTaskName() { this->alarmTaskName_ = nullptr;};
    inline string alarmTaskName() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskName_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setAlarmTaskName(string alarmTaskName) { DARABONBA_PTR_SET_VALUE(alarmTaskName_, alarmTaskName) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions>) };
    inline vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions>) };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setDimensions(const vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setDimensions(vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline DescribeScalingRulesResponseBodyScalingRulesAlarms& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The ID of the event-triggered task that is associated with the scaling rule.
    std::shared_ptr<string> alarmTaskId_ = nullptr;
    // The name of the event-triggered task that is associated with the scaling rule.
    std::shared_ptr<string> alarmTaskName_ = nullptr;
    // The comparison operator between the statistical value and the threshold of the metric of the event-triggered task that is associated with the scaling rule. The comparison operator indicates the relationship in which the metric value and the metric threshold can meet the alert condition.
    // 
    // *   Valid value if the metric value is greater than or equal to the threshold: >=
    // *   Valid value if the metric value is less than or equal to the threshold: <=
    // *   Valid value if the metric value is greater than the threshold: >
    // *   Valid value if the metric value is less than the threshold: <
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The dimensions of the event-triggered task that is associated with the scaling rule.
    std::shared_ptr<vector<Models::DescribeScalingRulesResponseBodyScalingRulesAlarmsDimensions>> dimensions_ = nullptr;
    // The number of consecutive times when the event-triggered task that is associated with the scaling rule must meet the alert condition before an alert is triggered.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The name of the metric of the event-triggered task that is associated with the scaling rule.
    std::shared_ptr<string> metricName_ = nullptr;
    // The type of the metric of the event-triggered task that is associated with the scaling rule. Valid values:
    // 
    // *   system: system metrics
    // *   custom: custom metrics
    std::shared_ptr<string> metricType_ = nullptr;
    // The statistical period of the metric data in the target tracking scaling rule.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The statistical method of the event-triggered task that is associated with the scaling rule. Valid values:
    // 
    // *   Average
    // *   Maximum
    // *   Minimum
    std::shared_ptr<string> statistics_ = nullptr;
    // The alert threshold of the event-triggered task that is associated with the scaling rule.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
