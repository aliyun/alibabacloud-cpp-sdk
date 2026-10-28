// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERNOTIFYHISTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERNOTIFYHISTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListUserNotifyHistoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserNotifyHistoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(bizSource, bizSource_);
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(channelCategory, channelCategory_);
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(includeNoChannel, includeNoChannel_);
      DARABONBA_PTR_TO_JSON(isDesc, isDesc_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(partitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(receiver, receiver_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(sendType, sendType_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserNotifyHistoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(bizSource, bizSource_);
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(channelCategory, channelCategory_);
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(includeNoChannel, includeNoChannel_);
      DARABONBA_PTR_FROM_JSON(isDesc, isDesc_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(partitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(receiver, receiver_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(sendType, sendType_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListUserNotifyHistoriesRequest() = default ;
    ListUserNotifyHistoriesRequest(const ListUserNotifyHistoriesRequest &) = default ;
    ListUserNotifyHistoriesRequest(ListUserNotifyHistoriesRequest &&) = default ;
    ListUserNotifyHistoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserNotifyHistoriesRequest() = default ;
    ListUserNotifyHistoriesRequest& operator=(const ListUserNotifyHistoriesRequest &) = default ;
    ListUserNotifyHistoriesRequest& operator=(ListUserNotifyHistoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->bizSource_ == nullptr && this->channel_ == nullptr && this->channelCategory_ == nullptr && this->from_ == nullptr && this->group_ == nullptr
        && this->incidentId_ == nullptr && this->includeNoChannel_ == nullptr && this->isDesc_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->notifyStrategyId_ == nullptr && this->notifyStrategyName_ == nullptr && this->partitionKey_ == nullptr && this->receiver_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->sendType_ == nullptr && this->severity_ == nullptr && this->subscriptionId_ == nullptr && this->subscriptionName_ == nullptr
        && this->success_ == nullptr && this->to_ == nullptr && this->workspace_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline ListUserNotifyHistoriesRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // bizSource Field Functions 
    bool hasBizSource() const { return this->bizSource_ != nullptr;};
    void deleteBizSource() { this->bizSource_ = nullptr;};
    inline string getBizSource() const { DARABONBA_PTR_GET_DEFAULT(bizSource_, "") };
    inline ListUserNotifyHistoriesRequest& setBizSource(string bizSource) { DARABONBA_PTR_SET_VALUE(bizSource_, bizSource) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ListUserNotifyHistoriesRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // channelCategory Field Functions 
    bool hasChannelCategory() const { return this->channelCategory_ != nullptr;};
    void deleteChannelCategory() { this->channelCategory_ = nullptr;};
    inline string getChannelCategory() const { DARABONBA_PTR_GET_DEFAULT(channelCategory_, "") };
    inline ListUserNotifyHistoriesRequest& setChannelCategory(string channelCategory) { DARABONBA_PTR_SET_VALUE(channelCategory_, channelCategory) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline ListUserNotifyHistoriesRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListUserNotifyHistoriesRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string getIncidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline ListUserNotifyHistoriesRequest& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // includeNoChannel Field Functions 
    bool hasIncludeNoChannel() const { return this->includeNoChannel_ != nullptr;};
    void deleteIncludeNoChannel() { this->includeNoChannel_ = nullptr;};
    inline bool getIncludeNoChannel() const { DARABONBA_PTR_GET_DEFAULT(includeNoChannel_, false) };
    inline ListUserNotifyHistoriesRequest& setIncludeNoChannel(bool includeNoChannel) { DARABONBA_PTR_SET_VALUE(includeNoChannel_, includeNoChannel) };


    // isDesc Field Functions 
    bool hasIsDesc() const { return this->isDesc_ != nullptr;};
    void deleteIsDesc() { this->isDesc_ = nullptr;};
    inline bool getIsDesc() const { DARABONBA_PTR_GET_DEFAULT(isDesc_, false) };
    inline ListUserNotifyHistoriesRequest& setIsDesc(bool isDesc) { DARABONBA_PTR_SET_VALUE(isDesc_, isDesc) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserNotifyHistoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserNotifyHistoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline string getNotifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
    inline ListUserNotifyHistoriesRequest& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


    // notifyStrategyName Field Functions 
    bool hasNotifyStrategyName() const { return this->notifyStrategyName_ != nullptr;};
    void deleteNotifyStrategyName() { this->notifyStrategyName_ = nullptr;};
    inline string getNotifyStrategyName() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyName_, "") };
    inline ListUserNotifyHistoriesRequest& setNotifyStrategyName(string notifyStrategyName) { DARABONBA_PTR_SET_VALUE(notifyStrategyName_, notifyStrategyName) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline string getPartitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, "") };
    inline ListUserNotifyHistoriesRequest& setPartitionKey(string partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


    // receiver Field Functions 
    bool hasReceiver() const { return this->receiver_ != nullptr;};
    void deleteReceiver() { this->receiver_ = nullptr;};
    inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
    inline ListUserNotifyHistoriesRequest& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListUserNotifyHistoriesRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListUserNotifyHistoriesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sendType Field Functions 
    bool hasSendType() const { return this->sendType_ != nullptr;};
    void deleteSendType() { this->sendType_ = nullptr;};
    inline string getSendType() const { DARABONBA_PTR_GET_DEFAULT(sendType_, "") };
    inline ListUserNotifyHistoriesRequest& setSendType(string sendType) { DARABONBA_PTR_SET_VALUE(sendType_, sendType) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListUserNotifyHistoriesRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline ListUserNotifyHistoriesRequest& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline ListUserNotifyHistoriesRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserNotifyHistoriesRequest& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline ListUserNotifyHistoriesRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListUserNotifyHistoriesRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The notification batch ID. Used to filter the notification history for notifications delivered in the same batch.
    shared_ptr<string> batchId_ {};
    // **[Deprecated]** This is an internal reserved parameter used only for business source filtering in internal platform scenarios. Do not pass this parameter in external calls.
    shared_ptr<string> bizSource_ {};
    // The notification channel. Valid values:
    // - ALI_YUNGE_SMS: text message
    // - ALI_YUNGE_CALL: voice call
    // - ALI_YUNGE_MAIL: email
    // - ALI_YUNGE_ALIUID: internal message
    // - DING: DingTalk
    // - DING_COOL_APP: DingTalk Cool App
    // - FEISHU: Lark
    // - WEIXIN: WeCom
    // - SLACK: Slack
    // - TEAMS: Teams
    // - PAGERDUTY: PagerDuty
    // - WEBHOOK: custom webhook
    // - ALIYUN_SLS: Simple Log Service
    // - ALIYUN_FC: Function Compute
    // - ALIYUN_FC3: Function Compute 3.0
    // - ALIYUN_MNS: Message Service
    // - ALIYUN_OOS: CloudOps Orchestration Service
    // - ALIYUN_ESS: elastic scaling
    // - ALIYUN_EB: event bus
    // - ALIYUN_OPENAPI: OpenAPI
    shared_ptr<string> channel_ {};
    // The channel category. Valid values:
    // - WEBHOOK: webhook-based channels, such as DingTalk, Lark, WeCom, Slack, Teams, and custom webhooks
    // - YUNGE: Yunge communication channels, such as text messages, voice calls, and emails
    shared_ptr<string> channelCategory_ {};
    // The start time of the query. The value is a UNIX timestamp in seconds. Default value: 6 hours before the `to` parameter value.
    shared_ptr<int32_t> from_ {};
    // The contact group. Used to filter the notification history by contact group name.
    shared_ptr<string> group_ {};
    // The incident ID. Used to filter the notification history associated with a specified incident.
    shared_ptr<string> incidentId_ {};
    // Specifies whether to include notification records that have no actual delivery channel. Valid values:
    // - true: The records are included.
    // - false: The records are not included. Only records that were actually delivered through a channel are returned.
    // Default value: true.
    shared_ptr<bool> includeNoChannel_ {};
    // Specifies whether to sort the results in descending order of time. Valid values:
    // - true: The results are sorted in descending order, with the latest records appearing first.
    // - false: The results are sorted in ascending order.
    // Default value: true.
    shared_ptr<bool> isDesc_ {};
    // The maximum number of entries to return per page. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Used to retrieve the next page of data. It is an opaque string generated and encrypted by the server. You do not need to specify this parameter for the first query. For subsequent queries, pass the token returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The notification policy ID. Used to filter the notification history for a specified notification policy. It is a 32-character string.
    shared_ptr<string> notifyStrategyId_ {};
    // The notification policy name. Used to filter the notification history by notification policy name.
    shared_ptr<string> notifyStrategyName_ {};
    // **[Deprecated]** This is an internal reserved parameter used only for dedicated notification history query paths in internal platform scenarios. Do not pass this parameter in external calls.
    shared_ptr<string> partitionKey_ {};
    // The recipient. Used to filter the notification history by recipient address, such as a phone number, email address, or webhook URL.
    shared_ptr<string> receiver_ {};
    // The alert rule ID. Used to filter the notification history triggered by a specified alert rule. Exact match is applied.
    shared_ptr<string> ruleId_ {};
    // The alert rule name. Used to filter the notification history by rule name.
    shared_ptr<string> ruleName_ {};
    // The notification delivery type. Valid values:
    // - SUBSCRIBE: subscription notifications
    // - DIRECT: direct event notifications
    // - ITSM: ticket or action notifications
    shared_ptr<string> sendType_ {};
    // The alert severity. Valid values:
    // - CRITICAL: critical
    // - ERROR: error
    // - WARNING: warning
    // - INFO: information
    shared_ptr<string> severity_ {};
    // The subscription ID. Used to filter the notification history for a specified subscription. It is a 32-character string.
    shared_ptr<string> subscriptionId_ {};
    // The subscription name. Used to filter the notification history by subscription name.
    shared_ptr<string> subscriptionName_ {};
    // Specifies whether to filter by delivery result. Valid values:
    // - true: Only successfully delivered records are returned.
    // - false: Only failed delivery records are returned.
    // If you do not specify this parameter, the results are not filtered by delivery result.
    shared_ptr<bool> success_ {};
    // The end time of the query. The value is a UNIX timestamp in seconds. Default value: the current time.
    shared_ptr<int32_t> to_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
