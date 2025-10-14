// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYMETRICRULESMETRICRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYMETRICRULESMETRICRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& obj) { 
      DARABONBA_PTR_TO_JSON(ActionEnable, actionEnable_);
      DARABONBA_PTR_TO_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OkActions, okActions_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(StateValue, stateValue_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionEnable, actionEnable_);
      DARABONBA_PTR_FROM_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OkActions, okActions_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(StateValue, stateValue_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule() = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule(const DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule &) = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule(DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule &&) = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule() = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& operator=(const DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule &) = default ;
    DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& operator=(DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionEnable_ == nullptr
        && return this->alarmActions_ == nullptr && return this->comparisonOperator_ == nullptr && return this->dimensions_ == nullptr && return this->evaluationCount_ == nullptr && return this->expression_ == nullptr
        && return this->level_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->okActions_ == nullptr && return this->period_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->stateValue_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr; };
    // actionEnable Field Functions 
    bool hasActionEnable() const { return this->actionEnable_ != nullptr;};
    void deleteActionEnable() { this->actionEnable_ = nullptr;};
    inline string actionEnable() const { DARABONBA_PTR_GET_DEFAULT(actionEnable_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setActionEnable(string actionEnable) { DARABONBA_PTR_SET_VALUE(actionEnable_, actionEnable) };


    // alarmActions Field Functions 
    bool hasAlarmActions() const { return this->alarmActions_ != nullptr;};
    void deleteAlarmActions() { this->alarmActions_ = nullptr;};
    inline string alarmActions() const { DARABONBA_PTR_GET_DEFAULT(alarmActions_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setAlarmActions(string alarmActions) { DARABONBA_PTR_SET_VALUE(alarmActions_, alarmActions) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline string evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setEvaluationCount(string evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // okActions Field Functions 
    bool hasOkActions() const { return this->okActions_ != nullptr;};
    void deleteOkActions() { this->okActions_ = nullptr;};
    inline string okActions() const { DARABONBA_PTR_GET_DEFAULT(okActions_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setOkActions(string okActions) { DARABONBA_PTR_SET_VALUE(okActions_, okActions) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // stateValue Field Functions 
    bool hasStateValue() const { return this->stateValue_ != nullptr;};
    void deleteStateValue() { this->stateValue_ = nullptr;};
    inline string stateValue() const { DARABONBA_PTR_GET_DEFAULT(stateValue_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setStateValue(string stateValue) { DARABONBA_PTR_SET_VALUE(stateValue_, stateValue) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline DescribeSiteMonitorAttributeResponseBodyMetricRulesMetricRule& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // Indicates whether the alert rule is enabled. Valid values:
    // 
    // *   true: The alert rule is enabled.
    // *   false: The alert rule is disabled.
    std::shared_ptr<string> actionEnable_ = nullptr;
    // The alert contact group to which alert notifications are sent.
    std::shared_ptr<string> alarmActions_ = nullptr;
    // The operator that is used to compare the metric value with the threshold in the alert rule. Valid values:
    // 
    // *   `>=`
    // *   `>`
    // *   `<=`
    // *   `<`
    // *   `=`
    // *   `!=`
    // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
    // *   LessThanYesterday: less than the metric value at the same time yesterday
    // *   GreaterThanLastWeek: greater than the metric value at the same time last week
    // *   LessThanLastWeek: less than the metric value at the same time last week
    // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
    // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The dimension of the alert rule.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
    std::shared_ptr<string> evaluationCount_ = nullptr;
    // The expression that is used to trigger alerts.
    std::shared_ptr<string> expression_ = nullptr;
    // The alert severity. Valid values:
    // 
    // *   1: critical
    // *   2: warning
    // *   3: information
    std::shared_ptr<string> level_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // The value is in the following format: acs_service name.
    std::shared_ptr<string> namespace_ = nullptr;
    // The alert contact group that receives alert notifications.
    std::shared_ptr<string> okActions_ = nullptr;
    // The time interval. The value is the same as the interval at which metric data is reported. Unit: seconds.
    // 
    // >  If you specify a statistical period for the alert rule, data is queried based on the statistical period.
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The alert status. Valid values:
    // 
    // *   OK: The alert rule has no active alerts.
    // *   ALARM: The alert rule has active alerts.
    std::shared_ptr<string> stateValue_ = nullptr;
    // The statistical method of the alert rule. Valid values:
    // 
    // *   Availability: the percentage of available detection points
    // *   AvailableNumber: the number of available detection points
    // *   ErrorCodeMaximum: a status code for an alert
    // *   ErrorCodeMinimum: all status codes for a set of alerts
    // *   Average: response time
    std::shared_ptr<string> statistics_ = nullptr;
    // The alert threshold.
    std::shared_ptr<string> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
