// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUESTRULES_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUESTRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutResourceMetricRulesRequestRulesEscalations.hpp>
#include <vector>
#include <alibabacloud/models/PutResourceMetricRulesRequestRulesLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesRequestRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesRequestRules& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesRequestRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutResourceMetricRulesRequestRules() = default ;
    PutResourceMetricRulesRequestRules(const PutResourceMetricRulesRequestRules &) = default ;
    PutResourceMetricRulesRequestRules(PutResourceMetricRulesRequestRules &&) = default ;
    PutResourceMetricRulesRequestRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesRequestRules() = default ;
    PutResourceMetricRulesRequestRules& operator=(const PutResourceMetricRulesRequestRules &) = default ;
    PutResourceMetricRulesRequestRules& operator=(PutResourceMetricRulesRequestRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalations_ != nullptr
        && this->contactGroups_ != nullptr && this->effectiveInterval_ != nullptr && this->emailSubject_ != nullptr && this->interval_ != nullptr && this->labels_ != nullptr
        && this->metricName_ != nullptr && this->namespace_ != nullptr && this->noDataPolicy_ != nullptr && this->noEffectiveInterval_ != nullptr && this->period_ != nullptr
        && this->resources_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->silenceTime_ != nullptr && this->webhook_ != nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const Models::PutResourceMetricRulesRequestRulesEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, Models::PutResourceMetricRulesRequestRulesEscalations) };
    inline Models::PutResourceMetricRulesRequestRulesEscalations escalations() { DARABONBA_PTR_GET(escalations_, Models::PutResourceMetricRulesRequestRulesEscalations) };
    inline PutResourceMetricRulesRequestRules& setEscalations(const Models::PutResourceMetricRulesRequestRulesEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline PutResourceMetricRulesRequestRules& setEscalations(Models::PutResourceMetricRulesRequestRulesEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutResourceMetricRulesRequestRules& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutResourceMetricRulesRequestRules& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string emailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutResourceMetricRulesRequestRules& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline PutResourceMetricRulesRequestRules& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::PutResourceMetricRulesRequestRulesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::PutResourceMetricRulesRequestRulesLabels>) };
    inline vector<Models::PutResourceMetricRulesRequestRulesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::PutResourceMetricRulesRequestRulesLabels>) };
    inline PutResourceMetricRulesRequestRules& setLabels(const vector<Models::PutResourceMetricRulesRequestRulesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PutResourceMetricRulesRequestRules& setLabels(vector<Models::PutResourceMetricRulesRequestRulesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutResourceMetricRulesRequestRules& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutResourceMetricRulesRequestRules& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string noDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline PutResourceMetricRulesRequestRules& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline PutResourceMetricRulesRequestRules& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutResourceMetricRulesRequestRules& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline PutResourceMetricRulesRequestRules& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutResourceMetricRulesRequestRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutResourceMetricRulesRequestRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline PutResourceMetricRulesRequestRules& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutResourceMetricRulesRequestRules& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<Models::PutResourceMetricRulesRequestRulesEscalations> escalations_ = nullptr;
    // The alert contact groups. The alert notifications are sent to the alert contacts in the alert contact group.
    // 
    // Valid values of N: 1 to 500.
    // 
    // >  An alert contact group can contain one or more alert contacts. For information about how to create alert contacts and alert contact groups, see [PutContact](https://help.aliyun.com/document_detail/114923.html) and [PutContactGroup](https://help.aliyun.com/document_detail/114929.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The time period during which the alert rule is effective.
    // 
    // Valid values of N: 1 to 500.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // The subject of the alert notification email.
    // 
    // Valid values of N: 1 to 500.
    std::shared_ptr<string> emailSubject_ = nullptr;
    // The interval at which alerts are triggered based on the alert rule.
    // 
    // Unit: seconds.
    // 
    // Valid values of N: 1 to 500.
    // 
    // >  For information about how to query the statistical period of a metric, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> interval_ = nullptr;
    // If the metric meets the specified condition in the alert rule and CloudMonitor sends an alert notification, the tag is also written to the metric and displayed in the alert notification.
    std::shared_ptr<vector<Models::PutResourceMetricRulesRequestRulesLabels>> labels_ = nullptr;
    // The metric name.
    // 
    // Valid values of N: 1 to 500.
    // 
    // For information about how to query the name of a metric, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // Valid values of N: 1 to 500.
    // 
    // For information about how to query the namespace of a cloud service, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The method that is used to handle alerts when no monitoring data is found. Valid values:
    // 
    // *   KEEP_LAST_STATE (default): No operation is performed.
    // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // *   OK: The status is considered normal.
    // 
    // Valid values of N: 1 to 500.
    std::shared_ptr<string> noDataPolicy_ = nullptr;
    // The time period during which the alert rule is ineffective.
    // 
    // Valid values of N: 1 to 500.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    // The statistical period of the metric.
    // 
    // Unit: seconds. The default value is the interval at which the monitoring data of the metric is collected.
    // 
    // Valid values of N: 1 to 500.
    // 
    // >  For information about how to query the statistical period of a metric, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> period_ = nullptr;
    // The information about the resource. Example: `[{"instanceId":"i-uf6j91r34rnwawoo****"}]` or `[{"userId":"100931896542****"}]`.
    // 
    // Valid values of N: 1 to 500.
    // 
    // For more information about the supported dimensions that are used to query resources, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the alert rule.
    // 
    // Valid values of N: 1 to 500.
    // 
    // You can specify a new ID or the ID of an existing alert rule. For information about how to query the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // >  If you specify a new ID, a threshold-triggered alert rule is created.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    // 
    // Valid values of N: 1 to 500.
    // 
    // You can specify a new name or the name of an existing alert rule. For information about how to query the name of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // >  If you specify a new name, a threshold-triggered alert rule is created.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met.
    // 
    // Unit: seconds. Default value: 86400.
    // 
    // Valid values of N: 1 to 500.
    // 
    // >  If an alert is not cleared after the mute period ends, CloudMonitor resends an alert notification.
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
    // 
    // Valid values of N: 1 to 500.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
