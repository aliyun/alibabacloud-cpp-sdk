// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmLabels.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarmsAlarm : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarmsAlarm& obj) { 
      DARABONBA_PTR_TO_JSON(AlertState, alertState_);
      DARABONBA_PTR_TO_JSON(CompositeExpression, compositeExpression_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EnableState, enableState_);
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtUpdate, gmtUpdate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MailSubject, mailSubject_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProductCategory, productCategory_);
      DARABONBA_PTR_TO_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarmsAlarm& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertState, alertState_);
      DARABONBA_PTR_FROM_JSON(CompositeExpression, compositeExpression_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtUpdate, gmtUpdate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MailSubject, mailSubject_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProductCategory, productCategory_);
      DARABONBA_PTR_FROM_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    DescribeMetricRuleListResponseBodyAlarmsAlarm() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarm(const DescribeMetricRuleListResponseBodyAlarmsAlarm &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarm(DescribeMetricRuleListResponseBodyAlarmsAlarm &&) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarm(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarmsAlarm() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarm& operator=(const DescribeMetricRuleListResponseBodyAlarmsAlarm &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarm& operator=(DescribeMetricRuleListResponseBodyAlarmsAlarm &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertState_ != nullptr
        && this->compositeExpression_ != nullptr && this->contactGroups_ != nullptr && this->dimensions_ != nullptr && this->effectiveInterval_ != nullptr && this->enableState_ != nullptr
        && this->escalations_ != nullptr && this->gmtCreate_ != nullptr && this->gmtUpdate_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr
        && this->labels_ != nullptr && this->mailSubject_ != nullptr && this->metricName_ != nullptr && this->namespace_ != nullptr && this->noDataPolicy_ != nullptr
        && this->noEffectiveInterval_ != nullptr && this->period_ != nullptr && this->productCategory_ != nullptr && this->prometheus_ != nullptr && this->resources_ != nullptr
        && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->silenceTime_ != nullptr && this->sourceType_ != nullptr && this->webhook_ != nullptr; };
    // alertState Field Functions 
    bool hasAlertState() const { return this->alertState_ != nullptr;};
    void deleteAlertState() { this->alertState_ = nullptr;};
    inline string alertState() const { DARABONBA_PTR_GET_DEFAULT(alertState_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setAlertState(string alertState) { DARABONBA_PTR_SET_VALUE(alertState_, alertState) };


    // compositeExpression Field Functions 
    bool hasCompositeExpression() const { return this->compositeExpression_ != nullptr;};
    void deleteCompositeExpression() { this->compositeExpression_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression & compositeExpression() const { DARABONBA_PTR_GET_CONST(compositeExpression_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression compositeExpression() { DARABONBA_PTR_GET(compositeExpression_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setCompositeExpression(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression & compositeExpression) { DARABONBA_PTR_SET_VALUE(compositeExpression_, compositeExpression) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setCompositeExpression(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression && compositeExpression) { DARABONBA_PTR_SET_RVALUE(compositeExpression_, compositeExpression) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // enableState Field Functions 
    bool hasEnableState() const { return this->enableState_ != nullptr;};
    void deleteEnableState() { this->enableState_ = nullptr;};
    inline bool enableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, false) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setEnableState(bool enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations escalations() { DARABONBA_PTR_GET(escalations_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setEscalations(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setEscalations(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtUpdate Field Functions 
    bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
    void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
    inline string gmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setGmtUpdate(string gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabels & labels() const { DARABONBA_PTR_GET_CONST(labels_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabels) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabels labels() { DARABONBA_PTR_GET(labels_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabels) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setLabels(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setLabels(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // mailSubject Field Functions 
    bool hasMailSubject() const { return this->mailSubject_ != nullptr;};
    void deleteMailSubject() { this->mailSubject_ = nullptr;};
    inline string mailSubject() const { DARABONBA_PTR_GET_DEFAULT(mailSubject_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setMailSubject(string mailSubject) { DARABONBA_PTR_SET_VALUE(mailSubject_, mailSubject) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string noDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // productCategory Field Functions 
    bool hasProductCategory() const { return this->productCategory_ != nullptr;};
    void deleteProductCategory() { this->productCategory_ = nullptr;};
    inline string productCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


    // prometheus Field Functions 
    bool hasPrometheus() const { return this->prometheus_ != nullptr;};
    void deletePrometheus() { this->prometheus_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus & prometheus() const { DARABONBA_PTR_GET_CONST(prometheus_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus prometheus() { DARABONBA_PTR_GET(prometheus_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setPrometheus(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus & prometheus) { DARABONBA_PTR_SET_VALUE(prometheus_, prometheus) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setPrometheus(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus && prometheus) { DARABONBA_PTR_SET_RVALUE(prometheus_, prometheus) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarm& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The status of the alert rule. Valid values:
    // 
    // *   OK: The alert rule has no active alerts.
    // *   ALARM: The alert rule has active alerts.
    // *   INSUFFICIENT_DATA: No data is available.
    std::shared_ptr<string> alertState_ = nullptr;
    // The trigger conditions for multiple metrics.
    // 
    // >  The trigger conditions for a single metric and multiple metrics are mutually exclusive. You cannot specify trigger conditions for a single metric and multiple metrics at the same time.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpression> compositeExpression_ = nullptr;
    // The alert contact group.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The dimensions of the alert rule.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The time period during which the alert rule is effective.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // Indicates whether the alert rule is enabled. Valid values:
    // 
    // *   true: The alert rule is enabled.
    // *   false: The alert rule is disabled.
    std::shared_ptr<bool> enableState_ = nullptr;
    // The conditions for triggering different levels of alerts.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmEscalations> escalations_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtUpdate_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the application group.
    // 
    // >  If the alert rule is associated with an application group, the name of the application group is returned in this parameter.
    std::shared_ptr<string> groupName_ = nullptr;
    // The tags of the alert rule.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabels> labels_ = nullptr;
    // The subject of the alert notification email.
    std::shared_ptr<string> mailSubject_ = nullptr;
    // The name of the metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The method that is used to handle alerts when no monitoring data is found. Valid values:
    // 
    // *   KEEP_LAST_STATE (default value): No operation is performed.
    // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // *   OK: The status is considered normal.
    std::shared_ptr<string> noDataPolicy_ = nullptr;
    // The time period during which the alert rule is ineffective.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    // The statistical period.
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> productCategory_ = nullptr;
    // The Prometheus alerts.
    // 
    // >  This parameter is required only if you create a Prometheus alert rule for Hybrid Cloud Monitoring.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus> prometheus_ = nullptr;
    // The resources that are associated with the alert rule.
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alert notifications are not sent even if the trigger conditions are met. Unit: seconds. Default value: 86400. Minimum value: 3600.
    // 
    // Only one alert is reported during each mute period even if the metric value consecutively exceeds the alert rule threshold several times.
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The type of the alert rule. Valid value: METRIC. This value indicates an alert rule for time series metrics.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The callback URL. CloudMonitor pushes an alert notification to the specified callback URL by sending an HTTP POST request. Only the HTTP protocol is supported.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
