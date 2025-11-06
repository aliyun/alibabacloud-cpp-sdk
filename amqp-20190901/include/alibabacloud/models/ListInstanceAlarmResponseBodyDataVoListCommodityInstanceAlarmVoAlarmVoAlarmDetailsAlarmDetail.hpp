// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVOALARMVOALARMDETAILSALARMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEALARMRESPONSEBODYDATAVOLISTCOMMODITYINSTANCEALARMVOALARMVOALARMDETAILSALARMDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AlertState, alertState_);
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EnableState, enableState_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(MailSubject, mailSubject_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Times, times_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertState, alertState_);
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(MailSubject, mailSubject_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail &&) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail() = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& operator=(const ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail &) = default ;
    ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& operator=(ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertState_ == nullptr
        && return this->comparisonOperator_ == nullptr && return this->contactGroups_ == nullptr && return this->dimensions_ == nullptr && return this->effectiveInterval_ == nullptr && return this->enableState_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->mailSubject_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr
        && return this->noEffectiveInterval_ == nullptr && return this->period_ == nullptr && return this->resources_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->silenceTime_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr && return this->times_ == nullptr && return this->webhook_ == nullptr; };
    // alertState Field Functions 
    bool hasAlertState() const { return this->alertState_ != nullptr;};
    void deleteAlertState() { this->alertState_ = nullptr;};
    inline string alertState() const { DARABONBA_PTR_GET_DEFAULT(alertState_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setAlertState(string alertState) { DARABONBA_PTR_SET_VALUE(alertState_, alertState) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // enableState Field Functions 
    bool hasEnableState() const { return this->enableState_ != nullptr;};
    void deleteEnableState() { this->enableState_ = nullptr;};
    inline bool enableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, false) };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setEnableState(bool enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // mailSubject Field Functions 
    bool hasMailSubject() const { return this->mailSubject_ != nullptr;};
    void deleteMailSubject() { this->mailSubject_ = nullptr;};
    inline string mailSubject() const { DARABONBA_PTR_GET_DEFAULT(mailSubject_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setMailSubject(string mailSubject) { DARABONBA_PTR_SET_VALUE(mailSubject_, mailSubject) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline string silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setSilenceTime(string silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline string times() const { DARABONBA_PTR_GET_DEFAULT(times_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setTimes(string times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline ListInstanceAlarmResponseBodyDataVoListCommodityInstanceAlarmVOAlarmVOAlarmDetailsAlarmDetail& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<string> alertState_ = nullptr;
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    std::shared_ptr<string> contactGroups_ = nullptr;
    std::shared_ptr<string> dimensions_ = nullptr;
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    std::shared_ptr<bool> enableState_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> mailSubject_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> resources_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> silenceTime_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<string> threshold_ = nullptr;
    std::shared_ptr<string> times_ = nullptr;
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
