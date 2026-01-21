// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMMETRICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMMETRICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutCustomMetricRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomMetricRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomMetricRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutCustomMetricRuleRequest() = default ;
    PutCustomMetricRuleRequest(const PutCustomMetricRuleRequest &) = default ;
    PutCustomMetricRuleRequest(PutCustomMetricRuleRequest &&) = default ;
    PutCustomMetricRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomMetricRuleRequest() = default ;
    PutCustomMetricRuleRequest& operator=(const PutCustomMetricRuleRequest &) = default ;
    PutCustomMetricRuleRequest& operator=(PutCustomMetricRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->contactGroups_ == nullptr && this->effectiveInterval_ == nullptr && this->emailSubject_ == nullptr && this->evaluationCount_ == nullptr && this->groupId_ == nullptr
        && this->level_ == nullptr && this->metricName_ == nullptr && this->period_ == nullptr && this->resources_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->silenceTime_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->webhook_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline PutCustomMetricRuleRequest& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string getContactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutCustomMetricRuleRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string getEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutCustomMetricRuleRequest& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string getEmailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutCustomMetricRuleRequest& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline PutCustomMetricRuleRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutCustomMetricRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutCustomMetricRuleRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutCustomMetricRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutCustomMetricRuleRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline PutCustomMetricRuleRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutCustomMetricRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutCustomMetricRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline PutCustomMetricRuleRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline PutCustomMetricRuleRequest& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline PutCustomMetricRuleRequest& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutCustomMetricRuleRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The operator that is used to compare the metric value with the threshold. Valid values:
    // 
    // *   `>=`
    // *   `=`
    // *   `<=`
    // *   `>`
    // *   `<`
    // *   `!=`
    // 
    // This parameter is required.
    shared_ptr<string> comparisonOperator_ {};
    // The alert contact groups. Separate multiple alert contact groups with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> contactGroups_ {};
    // The period of time during which the alert rule is effective. Valid values: 00:00 to 23:59.
    shared_ptr<string> effectiveInterval_ {};
    // The subject of the alert notification email.
    shared_ptr<string> emailSubject_ {};
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
    // 
    // This parameter is required.
    shared_ptr<int32_t> evaluationCount_ {};
    // The ID of the application group to which the custom monitoring data belongs.
    // 
    // >  The value 0 indicates that the reported custom monitoring data does not belong to an application group.
    shared_ptr<string> groupId_ {};
    // The alert level. Valid values:
    // 
    // *   CRITICAL
    // *   WARN
    // *   INFO
    // 
    // This parameter is required.
    shared_ptr<string> level_ {};
    // The metric name.
    // 
    // >  For more information about how to obtain the metric name, see [DescribeCustomMetricList](https://help.aliyun.com/document_detail/115005.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The cycle that is used to aggregate custom monitoring data. Unit: seconds Set the value to an integral multiple of 60. The original reporting cycle of custom monitoring data is used by default.
    shared_ptr<string> period_ {};
    // The custom monitoring data to which the alert rule applies. The value includes the application group ID to which the custom monitoring data belongs and the dimension to which the metric belongs.
    // 
    // This parameter is required.
    shared_ptr<string> resources_ {};
    // The ID of the alert rule.
    // 
    // >  You can specify an existing ID to modify the corresponding alert rule or specify a new ID to create an alert rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The name of the alert rule.
    shared_ptr<string> ruleName_ {};
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400, which is equivalent to one day.
    // 
    // >  Only one alert notification is sent during each mute period even if the metric value exceeds the alert threshold several times.
    shared_ptr<int32_t> silenceTime_ {};
    // The method used to calculate the metric value based on which alerts are triggered.
    // 
    // This parameter is required.
    shared_ptr<string> statistics_ {};
    // The alert threshold.
    // 
    // This parameter is required.
    shared_ptr<string> threshold_ {};
    // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
