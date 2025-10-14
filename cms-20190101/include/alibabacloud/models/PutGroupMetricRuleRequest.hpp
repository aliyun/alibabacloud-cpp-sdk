// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutGroupMetricRuleRequestEscalations.hpp>
#include <vector>
#include <alibabacloud/models/PutGroupMetricRuleRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutGroupMetricRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutGroupMetricRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_TO_JSON(ExtraDimensionJson, extraDimensionJson_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutGroupMetricRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_FROM_JSON(ExtraDimensionJson, extraDimensionJson_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutGroupMetricRuleRequest() = default ;
    PutGroupMetricRuleRequest(const PutGroupMetricRuleRequest &) = default ;
    PutGroupMetricRuleRequest(PutGroupMetricRuleRequest &&) = default ;
    PutGroupMetricRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutGroupMetricRuleRequest() = default ;
    PutGroupMetricRuleRequest& operator=(const PutGroupMetricRuleRequest &) = default ;
    PutGroupMetricRuleRequest& operator=(PutGroupMetricRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->escalations_ == nullptr
        && return this->category_ == nullptr && return this->contactGroups_ == nullptr && return this->dimensions_ == nullptr && return this->effectiveInterval_ == nullptr && return this->emailSubject_ == nullptr
        && return this->extraDimensionJson_ == nullptr && return this->groupId_ == nullptr && return this->interval_ == nullptr && return this->labels_ == nullptr && return this->metricName_ == nullptr
        && return this->namespace_ == nullptr && return this->noDataPolicy_ == nullptr && return this->noEffectiveInterval_ == nullptr && return this->options_ == nullptr && return this->period_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->silenceTime_ == nullptr && return this->webhook_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const PutGroupMetricRuleRequestEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, PutGroupMetricRuleRequestEscalations) };
    inline PutGroupMetricRuleRequestEscalations escalations() { DARABONBA_PTR_GET(escalations_, PutGroupMetricRuleRequestEscalations) };
    inline PutGroupMetricRuleRequest& setEscalations(const PutGroupMetricRuleRequestEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline PutGroupMetricRuleRequest& setEscalations(PutGroupMetricRuleRequestEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PutGroupMetricRuleRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutGroupMetricRuleRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline PutGroupMetricRuleRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutGroupMetricRuleRequest& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string emailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutGroupMetricRuleRequest& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // extraDimensionJson Field Functions 
    bool hasExtraDimensionJson() const { return this->extraDimensionJson_ != nullptr;};
    void deleteExtraDimensionJson() { this->extraDimensionJson_ = nullptr;};
    inline string extraDimensionJson() const { DARABONBA_PTR_GET_DEFAULT(extraDimensionJson_, "") };
    inline PutGroupMetricRuleRequest& setExtraDimensionJson(string extraDimensionJson) { DARABONBA_PTR_SET_VALUE(extraDimensionJson_, extraDimensionJson) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutGroupMetricRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline PutGroupMetricRuleRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<PutGroupMetricRuleRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<PutGroupMetricRuleRequestLabels>) };
    inline vector<PutGroupMetricRuleRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<PutGroupMetricRuleRequestLabels>) };
    inline PutGroupMetricRuleRequest& setLabels(const vector<PutGroupMetricRuleRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline PutGroupMetricRuleRequest& setLabels(vector<PutGroupMetricRuleRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutGroupMetricRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutGroupMetricRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string noDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline PutGroupMetricRuleRequest& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline PutGroupMetricRuleRequest& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline PutGroupMetricRuleRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutGroupMetricRuleRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutGroupMetricRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutGroupMetricRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline PutGroupMetricRuleRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutGroupMetricRuleRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<PutGroupMetricRuleRequestEscalations> escalations_ = nullptr;
    // The abbreviation of the cloud service name.
    // 
    // For more information about how to obtain the abbreviation of a cloud service name, see `metricCategory` in the response parameter `Labels` of the [DescribeProjectMeta](https://help.aliyun.com/document_detail/114916.html) operation.
    std::shared_ptr<string> category_ = nullptr;
    // The alert contact group.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The first-level dimension of the alert rule in the application group.
    // 
    // Set the value to a set of key-value pairs, for example, `userId:120886317861****` or `instanceId:i-m5e1qg6uo38rztr4****`.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The time period during which the alert rule is effective.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // The subject of the alert notification email.
    std::shared_ptr<string> emailSubject_ = nullptr;
    // The second-level or third-level dimension of the alert rule in the application group.
    // 
    // Set the value to a set of key-value pairs, for example, `port:80` or `/dev/xvda:d-m5e6yphgzn3aprwu****`.
    // 
    // If the first-level dimension of the alert rule is `instanceId:i-m5e1qg6uo38rztr4****`, its second-level dimension is the `/dev/xvda:d-m5e6yphgzn3aprwu****` disk in the instance.
    std::shared_ptr<string> extraDimensionJson_ = nullptr;
    // The application group ID.
    // 
    // For more information about how to obtain the ID of an application group, see [DescribeMonitorGroups](https://help.aliyun.com/document_detail/115032.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The interval at which CloudMonitor checks whether the alert rule is triggered. Unit: seconds.
    // 
    // >  We recommend that you set the interval to the data aggregation period. If the interval is shorter than the data aggregation period, alerts cannot be triggered due to insufficient data.
    std::shared_ptr<string> interval_ = nullptr;
    // The tags of the alert rule.
    // 
    // The specified tag is contained in alert notifications.
    std::shared_ptr<vector<PutGroupMetricRuleRequestLabels>> labels_ = nullptr;
    // The metric name.
    // 
    // For more information about how to obtain the name of a metric, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about how to obtain the namespace of a cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The method that is used to handle alerts when no monitoring data is found. Valid values:
    // 
    // *   KEEP_LAST_STATE (default): No operation is performed.
    // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // *   OK: The status is considered normal.
    std::shared_ptr<string> noDataPolicy_ = nullptr;
    // The time period during which the alert rule is ineffective.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
    // The aggregation period of the metric data.
    // 
    // Set the `Period` parameter to an integral multiple of 60. Unit: seconds. Default value: 300.
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the alert rule.
    // 
    // *   When you create an alert rule for the application group, enter the ID of the alert rule.
    // *   When you modify a specified alert rule in the application group, you must obtain the ID of the alert rule. For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    // 
    // *   When you create an alert rule for the application group, enter the name of the alert rule.
    // *   When you modify a specified alert rule in the application group, you must obtain the name of the alert rule. For more information about how to obtain the name of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alerts are not sent even if the trigger conditions are met.
    // 
    // Unit: seconds. Default value: 86400.
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The callback URL.
    // 
    // The callback URL must be accessible over the Internet. CloudMonitor sends a POST request to push an alert notification to the callback URL that you specify. Only HTTP requests are supported.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
