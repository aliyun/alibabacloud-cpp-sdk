// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYALERTLISTALERT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYALERTLISTALERT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeActiveMetricRuleListResponseBodyAlertListAlert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListResponseBodyAlertListAlert& obj) { 
      DARABONBA_PTR_TO_JSON(AlertState, alertState_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EnableState, enableState_);
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(MailSubject, mailSubject_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListResponseBodyAlertListAlert& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertState, alertState_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(MailSubject, mailSubject_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    DescribeActiveMetricRuleListResponseBodyAlertListAlert() = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlert(const DescribeActiveMetricRuleListResponseBodyAlertListAlert &) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlert(DescribeActiveMetricRuleListResponseBodyAlertListAlert &&) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListResponseBodyAlertListAlert() = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlert& operator=(const DescribeActiveMetricRuleListResponseBodyAlertListAlert &) = default ;
    DescribeActiveMetricRuleListResponseBodyAlertListAlert& operator=(DescribeActiveMetricRuleListResponseBodyAlertListAlert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertState_ == nullptr
        && return this->contactGroups_ == nullptr && return this->dimensions_ == nullptr && return this->effectiveInterval_ == nullptr && return this->enableState_ == nullptr && return this->escalations_ == nullptr
        && return this->mailSubject_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->noEffectiveInterval_ == nullptr && return this->period_ == nullptr
        && return this->resources_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->silenceTime_ == nullptr && return this->webhook_ == nullptr; };
    // alertState Field Functions 
    bool hasAlertState() const { return this->alertState_ != nullptr;};
    void deleteAlertState() { this->alertState_ = nullptr;};
    inline string alertState() const { DARABONBA_PTR_GET_DEFAULT(alertState_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setAlertState(string alertState) { DARABONBA_PTR_SET_VALUE(alertState_, alertState) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // enableState Field Functions 
    bool hasEnableState() const { return this->enableState_ != nullptr;};
    void deleteEnableState() { this->enableState_ = nullptr;};
    inline bool enableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, false) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setEnableState(bool enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations) };
    inline Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations escalations() { DARABONBA_PTR_GET(escalations_, Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setEscalations(const Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setEscalations(Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // mailSubject Field Functions 
    bool hasMailSubject() const { return this->mailSubject_ != nullptr;};
    void deleteMailSubject() { this->mailSubject_ = nullptr;};
    inline string mailSubject() const { DARABONBA_PTR_GET_DEFAULT(mailSubject_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setMailSubject(string mailSubject) { DARABONBA_PTR_SET_VALUE(mailSubject_, mailSubject) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline string silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline DescribeActiveMetricRuleListResponseBodyAlertListAlert& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The status of the alert rule. Valid values:
    // 
    // *   OK: The alert rule has no active alerts.
    // *   ALARM: The alert rule has active alerts.
    // *   INSUFFICIENT_DATA: No data is found.
    std::shared_ptr<string> alertState_ = nullptr;
    // The alert contact group.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The monitoring data of the specified resource.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The time period during which the alert rule is effective.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // Indicates whether the alert rule is enabled. Valid values:
    // 
    // *   true: The alert rule is enabled.
    // *   false: The alert rule is disabled.
    std::shared_ptr<bool> enableState_ = nullptr;
    // The conditions for triggering different levels of alerts.
    std::shared_ptr<Models::DescribeActiveMetricRuleListResponseBodyAlertListAlertEscalations> escalations_ = nullptr;
    // The subject of the alert notification email.
    std::shared_ptr<string> mailSubject_ = nullptr;
    // The name of the metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the Alibaba Cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The time period during which the alert rule is ineffective.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    // The aggregation period of monitoring data.
    // 
    // Unit: seconds.
    std::shared_ptr<string> period_ = nullptr;
    // The resources that are associated with the alert rule.
    std::shared_ptr<string> resources_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alerts are not sent even if the trigger conditions are met.
    // 
    // Unit: seconds.
    std::shared_ptr<string> silenceTime_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
