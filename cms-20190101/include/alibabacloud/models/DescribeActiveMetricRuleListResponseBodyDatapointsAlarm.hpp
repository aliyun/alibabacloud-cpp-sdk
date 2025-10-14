// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYDATAPOINTSALARM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYDATAPOINTSALARM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeActiveMetricRuleListResponseBodyDatapointsAlarm : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    DescribeActiveMetricRuleListResponseBodyDatapointsAlarm() = default ;
    DescribeActiveMetricRuleListResponseBodyDatapointsAlarm(const DescribeActiveMetricRuleListResponseBodyDatapointsAlarm &) = default ;
    DescribeActiveMetricRuleListResponseBodyDatapointsAlarm(DescribeActiveMetricRuleListResponseBodyDatapointsAlarm &&) = default ;
    DescribeActiveMetricRuleListResponseBodyDatapointsAlarm(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListResponseBodyDatapointsAlarm() = default ;
    DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& operator=(const DescribeActiveMetricRuleListResponseBodyDatapointsAlarm &) = default ;
    DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& operator=(DescribeActiveMetricRuleListResponseBodyDatapointsAlarm &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && return this->contactGroups_ == nullptr && return this->enable_ == nullptr && return this->endTime_ == nullptr && return this->evaluationCount_ == nullptr && return this->metricName_ == nullptr
        && return this->namespace_ == nullptr && return this->period_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->silenceTime_ == nullptr
        && return this->startTime_ == nullptr && return this->state_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr && return this->webhook_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline string evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setEvaluationCount(string evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline string silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline DescribeActiveMetricRuleListResponseBodyDatapointsAlarm& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The comparison operator that is used in the alert rule. Valid values:
    // 
    // *   `>`
    // *   `<`
    // *   `>=`
    // *   `<=`
    // *   `=`
    // *   `=`
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The alert contact group.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // Indicates whether the alert rule is enabled. Valid values:
    // 
    // *   true: The alert rule is enabled.
    // *   false: The alert rule is disabled.
    std::shared_ptr<string> enable_ = nullptr;
    // The end of the time period during which the alert rule is effective.
    // 
    // Unit: hours. For example, the value 23 indicates `23:59:59`.
    std::shared_ptr<string> endTime_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
    std::shared_ptr<string> evaluationCount_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The aggregation period of monitoring data.
    // 
    // Unit: seconds.
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alerts are not sent even if the trigger conditions are met.
    // 
    // Unit: seconds.
    std::shared_ptr<string> silenceTime_ = nullptr;
    // The beginning of the time period during which the alert rule is effective.
    // 
    // Unit: hours. For example, the value 00 indicates `00:00:00`.
    std::shared_ptr<string> startTime_ = nullptr;
    // Indicates whether the alert rule is enabled.
    std::shared_ptr<string> state_ = nullptr;
    // The statistical method.
    std::shared_ptr<string> statistics_ = nullptr;
    // The alert threshold.
    std::shared_ptr<string> threshold_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
