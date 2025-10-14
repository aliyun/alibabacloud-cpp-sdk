// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutResourceMetricRuleRequestEscalations.hpp>
#include <alibabacloud/models/PutResourceMetricRuleRequestCompositeExpression.hpp>
#include <vector>
#include <alibabacloud/models/PutResourceMetricRuleRequestLabels.hpp>
#include <alibabacloud/models/PutResourceMetricRuleRequestPrometheus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(CompositeExpression, compositeExpression_);
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
      DARABONBA_PTR_TO_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(CompositeExpression, compositeExpression_);
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
      DARABONBA_PTR_FROM_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutResourceMetricRuleRequest() = default ;
    PutResourceMetricRuleRequest(const PutResourceMetricRuleRequest &) = default ;
    PutResourceMetricRuleRequest(PutResourceMetricRuleRequest &&) = default ;
    PutResourceMetricRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleRequest() = default ;
    PutResourceMetricRuleRequest& operator=(const PutResourceMetricRuleRequest &) = default ;
    PutResourceMetricRuleRequest& operator=(PutResourceMetricRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->escalations_ == nullptr
        && return this->compositeExpression_ == nullptr && return this->contactGroups_ == nullptr && return this->effectiveInterval_ == nullptr && return this->emailSubject_ == nullptr && return this->interval_ == nullptr
        && return this->labels_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->noDataPolicy_ == nullptr && return this->noEffectiveInterval_ == nullptr
        && return this->period_ == nullptr && return this->prometheus_ == nullptr && return this->resources_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->silenceTime_ == nullptr && return this->webhook_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const PutResourceMetricRuleRequestEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, PutResourceMetricRuleRequestEscalations) };
    inline PutResourceMetricRuleRequestEscalations escalations() { DARABONBA_PTR_GET(escalations_, PutResourceMetricRuleRequestEscalations) };
    inline PutResourceMetricRuleRequest& setEscalations(const PutResourceMetricRuleRequestEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline PutResourceMetricRuleRequest& setEscalations(PutResourceMetricRuleRequestEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // compositeExpression Field Functions 
    bool hasCompositeExpression() const { return this->compositeExpression_ != nullptr;};
    void deleteCompositeExpression() { this->compositeExpression_ = nullptr;};
    inline const PutResourceMetricRuleRequestCompositeExpression & compositeExpression() const { DARABONBA_PTR_GET_CONST(compositeExpression_, PutResourceMetricRuleRequestCompositeExpression) };
    inline PutResourceMetricRuleRequestCompositeExpression compositeExpression() { DARABONBA_PTR_GET(compositeExpression_, PutResourceMetricRuleRequestCompositeExpression) };
    inline PutResourceMetricRuleRequest& setCompositeExpression(const PutResourceMetricRuleRequestCompositeExpression & compositeExpression) { DARABONBA_PTR_SET_VALUE(compositeExpression_, compositeExpression) };
    inline PutResourceMetricRuleRequest& setCompositeExpression(PutResourceMetricRuleRequestCompositeExpression && compositeExpression) { DARABONBA_PTR_SET_RVALUE(compositeExpression_, compositeExpression) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutResourceMetricRuleRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutResourceMetricRuleRequest& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string emailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutResourceMetricRuleRequest& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline PutResourceMetricRuleRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<PutResourceMetricRuleRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<PutResourceMetricRuleRequestLabels>) };
    inline vector<PutResourceMetricRuleRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<PutResourceMetricRuleRequestLabels>) };
    inline PutResourceMetricRuleRequest& setLabels(const vector<PutResourceMetricRuleRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PutResourceMetricRuleRequest& setLabels(vector<PutResourceMetricRuleRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutResourceMetricRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutResourceMetricRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string noDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline PutResourceMetricRuleRequest& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline PutResourceMetricRuleRequest& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutResourceMetricRuleRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // prometheus Field Functions 
    bool hasPrometheus() const { return this->prometheus_ != nullptr;};
    void deletePrometheus() { this->prometheus_ = nullptr;};
    inline const PutResourceMetricRuleRequestPrometheus & prometheus() const { DARABONBA_PTR_GET_CONST(prometheus_, PutResourceMetricRuleRequestPrometheus) };
    inline PutResourceMetricRuleRequestPrometheus prometheus() { DARABONBA_PTR_GET(prometheus_, PutResourceMetricRuleRequestPrometheus) };
    inline PutResourceMetricRuleRequest& setPrometheus(const PutResourceMetricRuleRequestPrometheus & prometheus) { DARABONBA_PTR_SET_VALUE(prometheus_, prometheus) };
    inline PutResourceMetricRuleRequest& setPrometheus(PutResourceMetricRuleRequestPrometheus && prometheus) { DARABONBA_PTR_SET_RVALUE(prometheus_, prometheus) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline PutResourceMetricRuleRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutResourceMetricRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutResourceMetricRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline PutResourceMetricRuleRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutResourceMetricRuleRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<PutResourceMetricRuleRequestEscalations> escalations_ = nullptr;
    // The trigger conditions for multiple metrics.
    // 
    // >  The trigger conditions for a single metric and multiple metrics are mutually exclusive. You cannot specify trigger conditions for a single metric and multiple metrics at the same time.
    std::shared_ptr<PutResourceMetricRuleRequestCompositeExpression> compositeExpression_ = nullptr;
    // The alert contact groups. Alert notifications are sent to the alert contacts in the alert contact group.
    // 
    // >  An alert contact group can contain one or more alert contacts. For information about how to create alert contacts and alert contact groups, see [PutContact](https://help.aliyun.com/document_detail/114923.html) and [PutContactGroup](https://help.aliyun.com/document_detail/114929.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The period of time during which the alert rule is effective.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // The subject of the alert notification email.
    std::shared_ptr<string> emailSubject_ = nullptr;
    // The interval at which alerts are triggered based on the alert rule. Unit: seconds.
    // 
    // >  For more information about how to query the statistical periods of metrics, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> interval_ = nullptr;
    // If the metric meets the specified condition in the alert rule and CloudMonitor sends an alert notification, the tag is also written to the metric and displayed in the alert notification.
    // 
    // >  This parameter is equivalent to the Label parameter of Prometheus alerts.
    std::shared_ptr<vector<PutResourceMetricRuleRequestLabels>> labels_ = nullptr;
    // The metric name. For more information about how to query metric names, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  If you create a Prometheus alert rule for Hybrid Cloud Monitoring, you must set this parameter to the name of the namespace. For more information about how to query the names of namespaces, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service. For more information about how to query the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // >  If you create a Prometheus alert rule for Hybrid Cloud Monitoring, you must set this parameter to `acs_prometheus`.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The method that is used to handle alerts when no monitoring data is found. Valid value:
    // 
    // *   KEEP_LAST_STATE (default): No operation is performed.
    // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // *   OK: The status is considered normal.
    std::shared_ptr<string> noDataPolicy_ = nullptr;
    // The period of time during which the alert rule is ineffective.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    // The statistical period of the metric. Unit: seconds. The default value is the interval at which the monitoring data of the metric is collected.
    // 
    // >  For more information about how to query the statistical periods of metrics, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> period_ = nullptr;
    // Prometheus alerts.
    // 
    // >  This parameter is required only if you create a Prometheus alert rule for Hybrid Cloud Monitoring.
    std::shared_ptr<PutResourceMetricRuleRequestPrometheus> prometheus_ = nullptr;
    // The resource information. Examples: `[{"instanceId":"i-uf6j91r34rnwawoo****"}]` and `[{"userId":"100931896542****"}]`.
    // 
    // For more information about the supported dimensions that are used to query resources, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the alert rule.
    // 
    // You can specify a new ID or the ID of an existing alert rule. For more information about how to query the IDs of alert rules, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // >  If you specify a new ID, a threshold-triggered alert rule is created.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    // 
    // You can specify a new name or the name of an existing alert rule. For more information about how to query the names of alert rules, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // >  If you specify a new name, a threshold-triggered alert rule is created.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400.
    // 
    // >  If an alert is not cleared after the mute period ends, CloudMonitor resends an alert notification.
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
