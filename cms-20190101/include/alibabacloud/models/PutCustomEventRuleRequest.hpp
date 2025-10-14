// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMEVENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMEVENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutCustomEventRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomEventRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomEventRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    PutCustomEventRuleRequest() = default ;
    PutCustomEventRuleRequest(const PutCustomEventRuleRequest &) = default ;
    PutCustomEventRuleRequest(PutCustomEventRuleRequest &&) = default ;
    PutCustomEventRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomEventRuleRequest() = default ;
    PutCustomEventRuleRequest& operator=(const PutCustomEventRuleRequest &) = default ;
    PutCustomEventRuleRequest& operator=(PutCustomEventRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && return this->effectiveInterval_ == nullptr && return this->emailSubject_ == nullptr && return this->eventName_ == nullptr && return this->groupId_ == nullptr && return this->level_ == nullptr
        && return this->period_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->threshold_ == nullptr && return this->webhook_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline PutCustomEventRuleRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline PutCustomEventRuleRequest& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string emailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline PutCustomEventRuleRequest& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline PutCustomEventRuleRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline PutCustomEventRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutCustomEventRuleRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline PutCustomEventRuleRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutCustomEventRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutCustomEventRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline PutCustomEventRuleRequest& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline PutCustomEventRuleRequest& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The alert contact group that receives alert notifications. Separate multiple contact groups with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The time period during which the alert rule is effective. Valid values: 00:00 to 23:59.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // The subject of the alert notification email.
    std::shared_ptr<string> emailSubject_ = nullptr;
    // The name of the custom event. For more information about how to obtain the event name, see [DescribeCustomEventAttribute](https://help.aliyun.com/document_detail/115262.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> eventName_ = nullptr;
    // The ID of the application group. For more information about how to obtain the group ID, see [DescribeCustomEventAttribute](https://help.aliyun.com/document_detail/115262.html).
    // 
    // >  The value 0 indicates that the reported custom event does not belong to any application Group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The level of the alert. Valid values:
    // 
    // *   CRITICAL: critical issue
    // *   WARN: warning
    // *   INFO: information
    // 
    // This parameter is required.
    std::shared_ptr<string> level_ = nullptr;
    // The cycle that is used to aggregate monitoring data of the custom event. Unit: seconds. Set the value to an integral multiple of 60. Default value: 300.
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the alert rule.
    // 
    // >  You can specify an existing ID to modify the corresponding alert rule or specify a new ID to create an alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The alert threshold.
    // 
    // This parameter is required.
    std::shared_ptr<string> threshold_ = nullptr;
    // The callback URL to which a POST request is sent when an alert is triggered based on the alert rule.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
