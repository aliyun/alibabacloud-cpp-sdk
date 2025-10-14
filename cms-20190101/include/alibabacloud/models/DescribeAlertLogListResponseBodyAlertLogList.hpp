// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListDimensions.hpp>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListEscalation.hpp>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListExtendedInfo.hpp>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListSendDetail.hpp>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListSendResultList.hpp>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListWebhookList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBodyAlertLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBodyAlertLogList& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_TO_JSON(BlackListDetail, blackListDetail_);
      DARABONBA_PTR_TO_JSON(BlackListName, blackListName_);
      DARABONBA_PTR_TO_JSON(BlackListUUID, blackListUUID_);
      DARABONBA_PTR_TO_JSON(ContactALIIWWList, contactALIIWWList_);
      DARABONBA_PTR_TO_JSON(ContactDingList, contactDingList_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(ContactMailList, contactMailList_);
      DARABONBA_PTR_TO_JSON(ContactOnCallList, contactOnCallList_);
      DARABONBA_PTR_TO_JSON(ContactSMSList, contactSMSList_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(DingdingWebhookList, dingdingWebhookList_);
      DARABONBA_PTR_TO_JSON(Escalation, escalation_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(ExtendedInfo, extendedInfo_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(LevelChange, levelChange_);
      DARABONBA_PTR_TO_JSON(LogId, logId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SendDetail, sendDetail_);
      DARABONBA_PTR_TO_JSON(SendResultList, sendResultList_);
      DARABONBA_PTR_TO_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_TO_JSON(WebhookList, webhookList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBodyAlertLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_FROM_JSON(BlackListDetail, blackListDetail_);
      DARABONBA_PTR_FROM_JSON(BlackListName, blackListName_);
      DARABONBA_PTR_FROM_JSON(BlackListUUID, blackListUUID_);
      DARABONBA_PTR_FROM_JSON(ContactALIIWWList, contactALIIWWList_);
      DARABONBA_PTR_FROM_JSON(ContactDingList, contactDingList_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(ContactMailList, contactMailList_);
      DARABONBA_PTR_FROM_JSON(ContactOnCallList, contactOnCallList_);
      DARABONBA_PTR_FROM_JSON(ContactSMSList, contactSMSList_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(DingdingWebhookList, dingdingWebhookList_);
      DARABONBA_PTR_FROM_JSON(Escalation, escalation_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(ExtendedInfo, extendedInfo_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(LevelChange, levelChange_);
      DARABONBA_PTR_FROM_JSON(LogId, logId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SendDetail, sendDetail_);
      DARABONBA_PTR_FROM_JSON(SendResultList, sendResultList_);
      DARABONBA_PTR_FROM_JSON(SendStatus, sendStatus_);
      DARABONBA_PTR_FROM_JSON(WebhookList, webhookList_);
    };
    DescribeAlertLogListResponseBodyAlertLogList() = default ;
    DescribeAlertLogListResponseBodyAlertLogList(const DescribeAlertLogListResponseBodyAlertLogList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogList(DescribeAlertLogListResponseBodyAlertLogList &&) = default ;
    DescribeAlertLogListResponseBodyAlertLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBodyAlertLogList() = default ;
    DescribeAlertLogListResponseBodyAlertLogList& operator=(const DescribeAlertLogListResponseBodyAlertLogList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogList& operator=(DescribeAlertLogListResponseBodyAlertLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertTime_ == nullptr
        && return this->blackListDetail_ == nullptr && return this->blackListName_ == nullptr && return this->blackListUUID_ == nullptr && return this->contactALIIWWList_ == nullptr && return this->contactDingList_ == nullptr
        && return this->contactGroups_ == nullptr && return this->contactMailList_ == nullptr && return this->contactOnCallList_ == nullptr && return this->contactSMSList_ == nullptr && return this->dimensions_ == nullptr
        && return this->dingdingWebhookList_ == nullptr && return this->escalation_ == nullptr && return this->eventName_ == nullptr && return this->extendedInfo_ == nullptr && return this->groupId_ == nullptr
        && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->level_ == nullptr && return this->levelChange_ == nullptr
        && return this->logId_ == nullptr && return this->message_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->product_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->sendDetail_ == nullptr && return this->sendResultList_ == nullptr && return this->sendStatus_ == nullptr
        && return this->webhookList_ == nullptr; };
    // alertTime Field Functions 
    bool hasAlertTime() const { return this->alertTime_ != nullptr;};
    void deleteAlertTime() { this->alertTime_ = nullptr;};
    inline string alertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setAlertTime(string alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


    // blackListDetail Field Functions 
    bool hasBlackListDetail() const { return this->blackListDetail_ != nullptr;};
    void deleteBlackListDetail() { this->blackListDetail_ = nullptr;};
    inline string blackListDetail() const { DARABONBA_PTR_GET_DEFAULT(blackListDetail_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setBlackListDetail(string blackListDetail) { DARABONBA_PTR_SET_VALUE(blackListDetail_, blackListDetail) };


    // blackListName Field Functions 
    bool hasBlackListName() const { return this->blackListName_ != nullptr;};
    void deleteBlackListName() { this->blackListName_ = nullptr;};
    inline string blackListName() const { DARABONBA_PTR_GET_DEFAULT(blackListName_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setBlackListName(string blackListName) { DARABONBA_PTR_SET_VALUE(blackListName_, blackListName) };


    // blackListUUID Field Functions 
    bool hasBlackListUUID() const { return this->blackListUUID_ != nullptr;};
    void deleteBlackListUUID() { this->blackListUUID_ = nullptr;};
    inline string blackListUUID() const { DARABONBA_PTR_GET_DEFAULT(blackListUUID_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setBlackListUUID(string blackListUUID) { DARABONBA_PTR_SET_VALUE(blackListUUID_, blackListUUID) };


    // contactALIIWWList Field Functions 
    bool hasContactALIIWWList() const { return this->contactALIIWWList_ != nullptr;};
    void deleteContactALIIWWList() { this->contactALIIWWList_ = nullptr;};
    inline const vector<string> & contactALIIWWList() const { DARABONBA_PTR_GET_CONST(contactALIIWWList_, vector<string>) };
    inline vector<string> contactALIIWWList() { DARABONBA_PTR_GET(contactALIIWWList_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactALIIWWList(const vector<string> & contactALIIWWList) { DARABONBA_PTR_SET_VALUE(contactALIIWWList_, contactALIIWWList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactALIIWWList(vector<string> && contactALIIWWList) { DARABONBA_PTR_SET_RVALUE(contactALIIWWList_, contactALIIWWList) };


    // contactDingList Field Functions 
    bool hasContactDingList() const { return this->contactDingList_ != nullptr;};
    void deleteContactDingList() { this->contactDingList_ = nullptr;};
    inline const vector<string> & contactDingList() const { DARABONBA_PTR_GET_CONST(contactDingList_, vector<string>) };
    inline vector<string> contactDingList() { DARABONBA_PTR_GET(contactDingList_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactDingList(const vector<string> & contactDingList) { DARABONBA_PTR_SET_VALUE(contactDingList_, contactDingList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactDingList(vector<string> && contactDingList) { DARABONBA_PTR_SET_RVALUE(contactDingList_, contactDingList) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<string> & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<string>) };
    inline vector<string> contactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactGroups(const vector<string> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactGroups(vector<string> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // contactMailList Field Functions 
    bool hasContactMailList() const { return this->contactMailList_ != nullptr;};
    void deleteContactMailList() { this->contactMailList_ = nullptr;};
    inline const vector<string> & contactMailList() const { DARABONBA_PTR_GET_CONST(contactMailList_, vector<string>) };
    inline vector<string> contactMailList() { DARABONBA_PTR_GET(contactMailList_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactMailList(const vector<string> & contactMailList) { DARABONBA_PTR_SET_VALUE(contactMailList_, contactMailList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactMailList(vector<string> && contactMailList) { DARABONBA_PTR_SET_RVALUE(contactMailList_, contactMailList) };


    // contactOnCallList Field Functions 
    bool hasContactOnCallList() const { return this->contactOnCallList_ != nullptr;};
    void deleteContactOnCallList() { this->contactOnCallList_ = nullptr;};
    inline const vector<string> & contactOnCallList() const { DARABONBA_PTR_GET_CONST(contactOnCallList_, vector<string>) };
    inline vector<string> contactOnCallList() { DARABONBA_PTR_GET(contactOnCallList_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactOnCallList(const vector<string> & contactOnCallList) { DARABONBA_PTR_SET_VALUE(contactOnCallList_, contactOnCallList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactOnCallList(vector<string> && contactOnCallList) { DARABONBA_PTR_SET_RVALUE(contactOnCallList_, contactOnCallList) };


    // contactSMSList Field Functions 
    bool hasContactSMSList() const { return this->contactSMSList_ != nullptr;};
    void deleteContactSMSList() { this->contactSMSList_ = nullptr;};
    inline const vector<string> & contactSMSList() const { DARABONBA_PTR_GET_CONST(contactSMSList_, vector<string>) };
    inline vector<string> contactSMSList() { DARABONBA_PTR_GET(contactSMSList_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactSMSList(const vector<string> & contactSMSList) { DARABONBA_PTR_SET_VALUE(contactSMSList_, contactSMSList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setContactSMSList(vector<string> && contactSMSList) { DARABONBA_PTR_SET_RVALUE(contactSMSList_, contactSMSList) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<Models::DescribeAlertLogListResponseBodyAlertLogListDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListDimensions>) };
    inline vector<Models::DescribeAlertLogListResponseBodyAlertLogListDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListDimensions>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setDimensions(const vector<Models::DescribeAlertLogListResponseBodyAlertLogListDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setDimensions(vector<Models::DescribeAlertLogListResponseBodyAlertLogListDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // dingdingWebhookList Field Functions 
    bool hasDingdingWebhookList() const { return this->dingdingWebhookList_ != nullptr;};
    void deleteDingdingWebhookList() { this->dingdingWebhookList_ = nullptr;};
    inline const vector<string> & dingdingWebhookList() const { DARABONBA_PTR_GET_CONST(dingdingWebhookList_, vector<string>) };
    inline vector<string> dingdingWebhookList() { DARABONBA_PTR_GET(dingdingWebhookList_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setDingdingWebhookList(const vector<string> & dingdingWebhookList) { DARABONBA_PTR_SET_VALUE(dingdingWebhookList_, dingdingWebhookList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setDingdingWebhookList(vector<string> && dingdingWebhookList) { DARABONBA_PTR_SET_RVALUE(dingdingWebhookList_, dingdingWebhookList) };


    // escalation Field Functions 
    bool hasEscalation() const { return this->escalation_ != nullptr;};
    void deleteEscalation() { this->escalation_ = nullptr;};
    inline const Models::DescribeAlertLogListResponseBodyAlertLogListEscalation & escalation() const { DARABONBA_PTR_GET_CONST(escalation_, Models::DescribeAlertLogListResponseBodyAlertLogListEscalation) };
    inline Models::DescribeAlertLogListResponseBodyAlertLogListEscalation escalation() { DARABONBA_PTR_GET(escalation_, Models::DescribeAlertLogListResponseBodyAlertLogListEscalation) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setEscalation(const Models::DescribeAlertLogListResponseBodyAlertLogListEscalation & escalation) { DARABONBA_PTR_SET_VALUE(escalation_, escalation) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setEscalation(Models::DescribeAlertLogListResponseBodyAlertLogListEscalation && escalation) { DARABONBA_PTR_SET_RVALUE(escalation_, escalation) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // extendedInfo Field Functions 
    bool hasExtendedInfo() const { return this->extendedInfo_ != nullptr;};
    void deleteExtendedInfo() { this->extendedInfo_ = nullptr;};
    inline const vector<Models::DescribeAlertLogListResponseBodyAlertLogListExtendedInfo> & extendedInfo() const { DARABONBA_PTR_GET_CONST(extendedInfo_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListExtendedInfo>) };
    inline vector<Models::DescribeAlertLogListResponseBodyAlertLogListExtendedInfo> extendedInfo() { DARABONBA_PTR_GET(extendedInfo_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListExtendedInfo>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setExtendedInfo(const vector<Models::DescribeAlertLogListResponseBodyAlertLogListExtendedInfo> & extendedInfo) { DARABONBA_PTR_SET_VALUE(extendedInfo_, extendedInfo) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setExtendedInfo(vector<Models::DescribeAlertLogListResponseBodyAlertLogListExtendedInfo> && extendedInfo) { DARABONBA_PTR_SET_RVALUE(extendedInfo_, extendedInfo) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // levelChange Field Functions 
    bool hasLevelChange() const { return this->levelChange_ != nullptr;};
    void deleteLevelChange() { this->levelChange_ = nullptr;};
    inline string levelChange() const { DARABONBA_PTR_GET_DEFAULT(levelChange_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setLevelChange(string levelChange) { DARABONBA_PTR_SET_VALUE(levelChange_, levelChange) };


    // logId Field Functions 
    bool hasLogId() const { return this->logId_ != nullptr;};
    void deleteLogId() { this->logId_ = nullptr;};
    inline string logId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sendDetail Field Functions 
    bool hasSendDetail() const { return this->sendDetail_ != nullptr;};
    void deleteSendDetail() { this->sendDetail_ = nullptr;};
    inline const Models::DescribeAlertLogListResponseBodyAlertLogListSendDetail & sendDetail() const { DARABONBA_PTR_GET_CONST(sendDetail_, Models::DescribeAlertLogListResponseBodyAlertLogListSendDetail) };
    inline Models::DescribeAlertLogListResponseBodyAlertLogListSendDetail sendDetail() { DARABONBA_PTR_GET(sendDetail_, Models::DescribeAlertLogListResponseBodyAlertLogListSendDetail) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setSendDetail(const Models::DescribeAlertLogListResponseBodyAlertLogListSendDetail & sendDetail) { DARABONBA_PTR_SET_VALUE(sendDetail_, sendDetail) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setSendDetail(Models::DescribeAlertLogListResponseBodyAlertLogListSendDetail && sendDetail) { DARABONBA_PTR_SET_RVALUE(sendDetail_, sendDetail) };


    // sendResultList Field Functions 
    bool hasSendResultList() const { return this->sendResultList_ != nullptr;};
    void deleteSendResultList() { this->sendResultList_ = nullptr;};
    inline const vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendResultList> & sendResultList() const { DARABONBA_PTR_GET_CONST(sendResultList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendResultList>) };
    inline vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendResultList> sendResultList() { DARABONBA_PTR_GET(sendResultList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendResultList>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setSendResultList(const vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendResultList> & sendResultList) { DARABONBA_PTR_SET_VALUE(sendResultList_, sendResultList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setSendResultList(vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendResultList> && sendResultList) { DARABONBA_PTR_SET_RVALUE(sendResultList_, sendResultList) };


    // sendStatus Field Functions 
    bool hasSendStatus() const { return this->sendStatus_ != nullptr;};
    void deleteSendStatus() { this->sendStatus_ = nullptr;};
    inline string sendStatus() const { DARABONBA_PTR_GET_DEFAULT(sendStatus_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogList& setSendStatus(string sendStatus) { DARABONBA_PTR_SET_VALUE(sendStatus_, sendStatus) };


    // webhookList Field Functions 
    bool hasWebhookList() const { return this->webhookList_ != nullptr;};
    void deleteWebhookList() { this->webhookList_ = nullptr;};
    inline const vector<Models::DescribeAlertLogListResponseBodyAlertLogListWebhookList> & webhookList() const { DARABONBA_PTR_GET_CONST(webhookList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListWebhookList>) };
    inline vector<Models::DescribeAlertLogListResponseBodyAlertLogListWebhookList> webhookList() { DARABONBA_PTR_GET(webhookList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListWebhookList>) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setWebhookList(const vector<Models::DescribeAlertLogListResponseBodyAlertLogListWebhookList> & webhookList) { DARABONBA_PTR_SET_VALUE(webhookList_, webhookList) };
    inline DescribeAlertLogListResponseBodyAlertLogList& setWebhookList(vector<Models::DescribeAlertLogListResponseBodyAlertLogListWebhookList> && webhookList) { DARABONBA_PTR_SET_RVALUE(webhookList_, webhookList) };


  protected:
    // The timestamp that was generated when the alert was triggered.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> alertTime_ = nullptr;
    // The details of the blacklist policy.
    std::shared_ptr<string> blackListDetail_ = nullptr;
    // The name of the blacklist policy.
    std::shared_ptr<string> blackListName_ = nullptr;
    // The ID of the blacklist policy.
    std::shared_ptr<string> blackListUUID_ = nullptr;
    std::shared_ptr<vector<string>> contactALIIWWList_ = nullptr;
    std::shared_ptr<vector<string>> contactDingList_ = nullptr;
    std::shared_ptr<vector<string>> contactGroups_ = nullptr;
    std::shared_ptr<vector<string>> contactMailList_ = nullptr;
    std::shared_ptr<vector<string>> contactOnCallList_ = nullptr;
    std::shared_ptr<vector<string>> contactSMSList_ = nullptr;
    // The dimensions of the resource that triggered alerts.
    std::shared_ptr<vector<Models::DescribeAlertLogListResponseBodyAlertLogListDimensions>> dimensions_ = nullptr;
    std::shared_ptr<vector<string>> dingdingWebhookList_ = nullptr;
    // The alert rule based on which the alert is triggered.
    std::shared_ptr<Models::DescribeAlertLogListResponseBodyAlertLogListEscalation> escalation_ = nullptr;
    // The event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // The extended fields.
    std::shared_ptr<vector<Models::DescribeAlertLogListResponseBodyAlertLogListExtendedInfo>> extendedInfo_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The resource name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The alert level and the methods that are used to send alert notifications. Valid values:
    // 
    // *   P4: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   OK: No alert is generated.
    std::shared_ptr<string> level_ = nullptr;
    // Indicates whether the alert level was changed. Valid values:
    // 
    // *   `P4->OK`: The alert level was changed from P4 to OK.
    // *   `P4->P4`: The alert level was still P4.
    std::shared_ptr<string> levelChange_ = nullptr;
    // The log ID.
    std::shared_ptr<string> logId_ = nullptr;
    // The alert information in a JSON string.
    std::shared_ptr<string> message_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The identifier of the cloud service. Valid values:
    // 
    // *   If the cloud service is provided by Alibaba Cloud, the abbreviation of the service name is returned. Example: ECS.
    // *   If the cloud service is not provided by Alibaba Cloud, a value in the `acs_Service keyword` format is returned. Example: acs_networkmonitor.
    std::shared_ptr<string> product_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The details about the sending results of alert notifications.
    std::shared_ptr<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetail> sendDetail_ = nullptr;
    // The sending results of alert notifications.
    std::shared_ptr<vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendResultList>> sendResultList_ = nullptr;
    // The status of the alert. Valid values:
    // 
    // *   0: The alert is triggered or cleared.
    // *   1: The alert is ineffective.
    // *   2: The alert is muted.
    // *   3: The host is restarting.
    // *   4: No alert notification is sent.
    // 
    // If the value of the SendStatus parameter is 0, the value P4 of the Level parameter indicates a triggered alert and the value OK indicates a cleared alert.
    std::shared_ptr<string> sendStatus_ = nullptr;
    // The callback URLs.
    std::shared_ptr<vector<Models::DescribeAlertLogListResponseBodyAlertLogListWebhookList>> webhookList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
