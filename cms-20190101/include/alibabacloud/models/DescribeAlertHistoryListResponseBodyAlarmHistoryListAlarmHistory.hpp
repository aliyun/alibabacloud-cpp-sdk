// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs.hpp>
#include <alibabacloud/models/DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups.hpp>
#include <alibabacloud/models/DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails.hpp>
#include <alibabacloud/models/DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses.hpp>
#include <alibabacloud/models/DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_TO_JSON(ContactALIIMs, contactALIIMs_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(ContactMails, contactMails_);
      DARABONBA_PTR_TO_JSON(ContactSmses, contactSmses_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_FROM_JSON(ContactALIIMs, contactALIIMs_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(ContactMails, contactMails_);
      DARABONBA_PTR_FROM_JSON(ContactSmses, contactSmses_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory &&) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& operator=(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& operator=(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertTime_ == nullptr
        && return this->contactALIIMs_ == nullptr && return this->contactGroups_ == nullptr && return this->contactMails_ == nullptr && return this->contactSmses_ == nullptr && return this->contacts_ == nullptr
        && return this->dimensions_ == nullptr && return this->evaluationCount_ == nullptr && return this->expression_ == nullptr && return this->groupId_ == nullptr && return this->instanceName_ == nullptr
        && return this->lastTime_ == nullptr && return this->level_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr && return this->state_ == nullptr && return this->status_ == nullptr && return this->value_ == nullptr && return this->webhooks_ == nullptr; };
    // alertTime Field Functions 
    bool hasAlertTime() const { return this->alertTime_ != nullptr;};
    void deleteAlertTime() { this->alertTime_ = nullptr;};
    inline int64_t alertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


    // contactALIIMs Field Functions 
    bool hasContactALIIMs() const { return this->contactALIIMs_ != nullptr;};
    void deleteContactALIIMs() { this->contactALIIMs_ = nullptr;};
    inline const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs & contactALIIMs() const { DARABONBA_PTR_GET_CONST(contactALIIMs_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs) };
    inline Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs contactALIIMs() { DARABONBA_PTR_GET(contactALIIMs_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactALIIMs(const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs & contactALIIMs) { DARABONBA_PTR_SET_VALUE(contactALIIMs_, contactALIIMs) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactALIIMs(Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs && contactALIIMs) { DARABONBA_PTR_SET_RVALUE(contactALIIMs_, contactALIIMs) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups) };
    inline Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups contactGroups() { DARABONBA_PTR_GET(contactGroups_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactGroups(const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactGroups(Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // contactMails Field Functions 
    bool hasContactMails() const { return this->contactMails_ != nullptr;};
    void deleteContactMails() { this->contactMails_ = nullptr;};
    inline const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails & contactMails() const { DARABONBA_PTR_GET_CONST(contactMails_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails) };
    inline Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails contactMails() { DARABONBA_PTR_GET(contactMails_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactMails(const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails & contactMails) { DARABONBA_PTR_SET_VALUE(contactMails_, contactMails) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactMails(Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails && contactMails) { DARABONBA_PTR_SET_RVALUE(contactMails_, contactMails) };


    // contactSmses Field Functions 
    bool hasContactSmses() const { return this->contactSmses_ != nullptr;};
    void deleteContactSmses() { this->contactSmses_ = nullptr;};
    inline const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses & contactSmses() const { DARABONBA_PTR_GET_CONST(contactSmses_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses) };
    inline Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses contactSmses() { DARABONBA_PTR_GET(contactSmses_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactSmses(const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses & contactSmses) { DARABONBA_PTR_SET_VALUE(contactSmses_, contactSmses) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContactSmses(Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses && contactSmses) { DARABONBA_PTR_SET_RVALUE(contactSmses_, contactSmses) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts) };
    inline Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts contacts() { DARABONBA_PTR_GET(contacts_, Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContacts(const Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setContacts(Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline string webhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


  protected:
    // The timestamp when the alert was triggered. Unit: milliseconds.
    std::shared_ptr<int64_t> alertTime_ = nullptr;
    // The TradeManager IDs of the alert contacts.
    // 
    // > This parameter is valid only on the China site (aliyun.com).
    std::shared_ptr<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs> contactALIIMs_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactGroups> contactGroups_ = nullptr;
    // The email addresses of the alert contacts.
    std::shared_ptr<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails> contactMails_ = nullptr;
    // The mobile numbers of the alert contacts.
    // 
    // > This parameter is valid only on the China site (aliyun.com).
    std::shared_ptr<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses> contactSmses_ = nullptr;
    // The alert contacts that receive alert notifications.
    std::shared_ptr<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts> contacts_ = nullptr;
    // The resources that are monitored.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The expression that is used to trigger alerts.
    std::shared_ptr<string> expression_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The duration of the alert. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The severity level and notification methods of the alert. Valid values:
    // 
    // *   P4: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   OK: No alert is generated.
    std::shared_ptr<string> level_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The alert status. Valid values:
    // 
    // *   ALARM: Alerts are triggered.
    // *   OK: No alerts are triggered.
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether alerts are muted. Valid values:
    // 
    // *   2 (default): Alerts are muted and are not triggered within the mute period, even if the condition specified in the alert rule is met.
    // *   0: Alerts are triggered or cleared.
    // *   1: The alert rule is ineffective.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The threshold of the metric value to trigger or clear an alert.
    std::shared_ptr<string> value_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> webhooks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
